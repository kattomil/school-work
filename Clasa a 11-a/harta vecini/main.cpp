#include <fstream>

using namespace std;

int n,x[100],v[100][100];
char t[100][100];

void citire() {
    ifstream f("harta.in");
    f>>n;
    int i,j;
    while(f>>i>>j) {
        v[i][j]=1;
        v[j][i]=1;
    }
    f.close();
}

int sol(int k) {return (k==n+1);}

int valid(int k) {
    for (int i=1; i<k; i++)
        if (v[i][k]==1 && x[i]==x[k]) return 0;
    return 1;
}

ofstream g("harta.out");

void afisare(int k) {
    for (int i=1; i<k; i++)
        g << x[i] << " ";
    g << endl;
}

void bk(int k) {
    if (sol(k)) afisare(k);
    else for (int i=1; i<=n; i++) {
        x[k]=i;
        if (valid(k)) bk(k+1);
    }
}

int main()
{
    citire();
    bk(1);
    g.close();
    return 0;
}

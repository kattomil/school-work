#include <iostream>
#include <fstream>

using namespace std;

int a[100][100],n,c[100],viz[100];

void citire() {
    ifstream f("g.in");
    f >> n;
    int i,j;
    while (f>>i>>j)
        a[i][j]=1;
    f.close();
}

void afisare(int u) {
    for (int i=1; i<=u; i++)
        cout << c[i] << " ";
}

void parcurgereL(int start) {
    int p=1,u=1,nod;
    c[p]=start;
    viz[start]=1;
    while(p<=u) {
        nod=c[p];
        for (int i=1;i<=n; i++)
            if (a[nod][i] && viz[i]==0) {
                u++;
                c[u]=i;
                viz[i]=1;
            }
        p++;
    }
    afisare(u);
}

int main()
{
    citire();
    int m;cin>>m;
    parcurgereL(m);
    return 0;
}

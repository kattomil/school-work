#include <iostream>
#include <cstring>
#include <fstream>

using namespace std;

int n,m,x[100];
char v[100][100];

void citire() {
    ifstream f("fazan.in");
    f >> n >> m;
    for (int i=1; i<=n; i++)
        do {
            f>>v[i];
        } while (strlen(v[i])>10);
    f.close();
}

ofstream g("fazan.out");
void afisare() {
    for (int i=1; i<=m; i++)
        g << v[x[i]] << " ";
    g << endl;
}

int sol(int k) {
    return (k==m+1);
}

int valid(int k) {
    for (int i=1; i<k; i++)
        if (x[i]==x[k]) return 0;
        if (k>1)
            if (v[x[k]][0]!=v[x[k-1]][strlen(v[x[k-1]])-2] || v[x[k]][1]!=v[x[k-1]][strlen(v[x[k-1]])-1]) return 0;
    return 1;
}

void b(int k) {
    if (sol(k)) afisare();
    else for (int i=1; i<=n; i++) {
        x[k]=i;
        if (valid(k)) b(k+1);
    }
}

int main()
{
    citire();
    b(1);
    g.close();
    return 0;
}

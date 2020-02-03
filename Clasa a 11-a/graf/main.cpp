#include <iostream>
#include <fstream>

using namespace std;

/**
fisierul graf.in are 2 valori n m
n - nr de vf ( |x| = n )
m - nr de elem al unui vector
pe a 2-a linie m valori care reprezinta elem unui vector
iar pe urmatoarele linii arcele

verificati daca elementele din vector formeaza un drum elementar
*/

int n,m,v[100],a[100][100];

void citire() {
    int x,y;
    ifstream f("graf.in");
    f >> n >> m;
    for (int i=1; i<=m; i++) f >> v[i];
    while (f>>x>>y) a[x][y]=1;
    f.close();
}

void afisare() {
    for (int i=1; i<=n; i++) {
        for (int j=1; j<=n; j++)
            cout << a[i][j] << " ";
        cout << endl;
    }
}

int varf() {
    if (v[1]>n || v[1]<1) return 0;
    for (int i=2; i<=m; i++)
        if (v[i]>n || v[i]<1) return 0;
    for (int i=1; i<=m; i++)
        for (int j=1; j<=m; j++)
            if (i!=j)
                if (v[i]==v[j]) return 0;
    return 1;
}

int arc() {

    return 0;
}

void elementar() {
    afisare();
}

int main()
{
    citire();
    if (varf()) elementar();
    return 0;
}

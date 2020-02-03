#include <iostream>
#include <fstream>

using namespace std;

int a[100][100],d[100][100],n,c[100],viz[100];

void cit() {
    ifstream f("g.in");
    f >> n;
    int i,j;
    while (f>>i>>j)
        a[i][j]=1;
    f.close();
    for (int i=1; i<=n; i++) {
        for (int j=1; j<=n; j++)
            cout << a[i][j] << " ";
        cout << endl;
    }
    cout << endl;
}

void p(int start) {
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
}

void dr() {
    for (int i=1; i<=n; i++) {
        for (int j=1; j<=n; j++) viz[j]=0;
        p(i);
        for (int j=1; j<=n; j++) d[i][j]=viz[j];
        d[i][i]=0;
    }

    for (int i=1; i<=n; i++) {
        for (int j=1; j<=n; j++)
            cout << d[i][j] << " ";
        cout << endl;
    }
    cout << endl;
}

void co() {
    int comp[100], nrc=1;
    dr();
    for (int i=1; i<=n; i++) comp[i]=0;
    for (int i=1; i<=n; i++) {
        if (comp[i]==0) {
            comp[i]=nrc;
            for (int j=1; j<=n; j++)
                if (d[j][i]==d[i][j] && d[i][j]==1)
                    comp[j]=nrc;
        }
        nrc++;
    }
    for (int i=1; i<=n; i++)
        cout << comp[i] << " ";
}

int main()
{
    cit();
    co();
    return 0;
}

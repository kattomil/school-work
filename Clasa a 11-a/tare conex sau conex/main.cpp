#include <iostream>
#include <fstream>

using namespace std;

int a[100][100],d[100][100],n,viz[100];

void citire() {
    ifstream f("g.in");
    f>>n;
    int i,j;
    while(f>>i>>j)a[i][j]=1;
    f.close();
}

void pI(int s) {
    viz[s]=1;
    for(int i=1;i<=n;i++)
        if(a[s][i]&&!viz[i]) pI(i);
}

void drum() {
    for(int i=1;i<=n;i++) {
        for (int j=1;j<=n;j++) viz[j]=0;
        pI(i);
        for (int j=1;j<=n;j++) d[i][j]=viz[j];
        d[i][i]=0;
    }
}

int tareConex() {
    for(int i=1;i<=n;i++)
        for (int j=1;j<=n;j++)
            if (i!=j&&!d[i][j]) return 0;
    return 1;
}

void conex() {
    int c[100],nrc=1;
    for (int i=1;i<=n;i++) c[i]=0;
    for (int i=1;i<=n;i++) {
        if(!c[i]) {
            c[i]=nrc;
            for(int j=1;j<=n;j++)
                if (d[i][j]&&d[j][i])
                    c[j] = nrc;
        }
        nrc++;
    }
    for (int i=1;i<=n;i++) {
        cout<<endl<<i<<": ";
        for (int j=1;j<=n;j++)
            if (i!=j && c[j]==i) cout << j << " ";
    }
}

int main()
{
    citire();
    drum();
    if(tareConex()) cout << "graficul este tare conex.";
    else conex();
    return 0;
}

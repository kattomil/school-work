#include <iostream>
#include <fstream>

using namespace std;

int a[100][100],d[100][100],m[100][100],v[100],n;

void afisare(int z[][100]) {
    for (int i=1;i<=n;i++) {
        for(int j=1;j<=n;j++)
            cout<<z[i][j]<<" ";
        cout<<endl;
    }
}

void citire() {
    ifstream f("g.in");
    f>>n;
    int i,j;
    while(f>>i>>j)
        a[i][j]=1;
    f.close();
}

void parcurgere(int s) {
    v[s]=1;
    for (int i=1;i<=n;i++)
        if(a[s][i]&&!v[i])
            parcurgere(i);
}

void drum() {
    for (int i=1;i<=n;i++) {
        for(int j=1;j<=n;j++)
            v[j]=0;
        parcurgere(i);
        for(int j=1;j<=n;j++)
            if(i!=j)
                d[i][j]=v[j];
    }
}

int verificareExistaDrum() {
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
            if (i!=j)
                if (!d[i][j]&&!d[j][i]) return 0;
    return 1;
}

void statiileFaraLegatura() {
    cout << "intre:" << endl;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
            if (i!=j)
                if (!d[i][j]&&!d[j][i])
                    cout << i << " si " << j << endl;
    cout << "nu exista legatura";
}

void drumDistantaMinima(int x, int y) {
    for (int k=1;k<=n;k++)
        for (int i=1;i<=n;i++)
            for(int j=1;j<=n;j++)
                if(i!=j&&k!=i&&k!=j)
                    if(d[i][j]>d[i][k]+d[k][i])
                        d[i][j]=d[i][k]+d[k][i];
}

void rezolvare() {
    drum();
    if (verificareExistaDrum()) {
        int x,y;
        cout << "Statie copil 1: ";cin>>x;
        cout << "Statie copil 2: ";cin>>y;
        drumDistantaMinima(x,y);
    } else {
        statiileFaraLegatura();
    }
}

int main()
{
    citire();
    rezolvare();
    return 0;
}

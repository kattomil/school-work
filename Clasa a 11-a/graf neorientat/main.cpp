#include <iostream>
#include <fstream>

using namespace std;

long long int n,a[100][100],m[100][100],d[100][100],v[100],c[100];

void citire() {
    ifstream f("g.in");
    f>>n;
    for (int i=1;i<=n;i++)
        for (int j=1;j<=n;j++)
            if(i!=j)
                m[i][j]=1000;
    int i,j,k;
    while(f>>i>>j>>k) {
        a[i][j]=a[j][i]=1;
        m[i][j]=m[j][i]=k;
    }
}
void afisare(int z[][100]) {
    for (int i=1;i<=n;i++) {
        for (int j=1;j<=n;j++)
            cout << z[i][j] << " ";
        cout << endl;
    }
}
void parcurgereL(int s) {
    int p=1,u=1;
    c[p]=s;
    v[s]=1;
    while(p<=u) {
        for(int i=1;i<=n;i++)
            if(a[c[p]][i]&&!v[i]) {
                u++;
                c[u]=i;
                v[i]=1;
            }
        p++;
    }
}
void parcurgereA(int s){
    v[s]=1;
    for(int i=1;i<=n;i++)
        if(a[s][i]&&!v[i])
            parcurgereA(i);
}
void drum() {
    for(int i=1;i<=n;i++) {
        for(int j=1;j<=n;j++)
            v[j]=0;
        parcurgereA(i);
        for(int j=1;j<=n;j++)
            if(i!=j)d[i][j]=v[j];
    }
}
void rf() {
    for (int k=1;k<=n;k++)
        for(int i=1;i<=n;i++)
            for(int j=1;j<=n;j++)
                if(i!=j&&k!=i&&k!=j)
                    if(m[i][j]>m[i][k]+m[k][j])
                        m[i][j]=m[i][k]+m[k][j];
}
void refacereDrum(int i, int j) {
    int ok=0,k=1;
    while(k<=n&&!ok) {
        if (k!=i&&k!=j)
            if(m[i][j]==m[i][k]+m[k][j]) {
                refacereDrum(i,k);
                refacereDrum(k,j);
                ok=1;
            }
        k++;
    }
    if(!ok) cout << j << " ";
}

int main()
{
    citire();
    afisare(m);
    return 0;
}

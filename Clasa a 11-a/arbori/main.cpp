#include <iostream>
#include <fstream>
using namespace std;
#define I 100
int c[100][100],n,s[100],t[100],a,b,suma;

void citire() {
    ifstream f("g.in");
    f>>a>>b>>n;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
            if(i!=j) c[i][j]=I;
    int i,j,cost;
    while(f>>i>>j>>cost)c[i][j]=c[j][i]=cost;
    f.close();
}
void afisare() {
    for(int i=1;i<=n;i++) {
        for(int j=1;j<=n;j++)
            cout << c[i][j] << " ";
        cout<<endl;
    }
}
void prim(int radacina) {
    int k,x,y,min;
    s[radacina]=1;
    t[radacina]=0;
    for(int k=1;k<n;k++) {
        min=I;
        for(int i=1;i<=n;i++)
            for(int j=1;j<=n;j++)
                if(s[i]&&!s[j]&&c[i][j]<min) {
                    min=c[i][j];
                    x=i;
                    y=j;
                }
                s[y]=1;
                t[y]=x;
                suma+=min;
                cout<<x<<' '<<y<<' '<<min<<endl;
    }
    cout<<suma;
}
void refacere(int x) {
    if(t[x])
        refacere(t[x]);
    cout<<x<<" ";
}
int main()
{
    citire();
    prim(a);
    cout<<endl<<endl;
    refacere(b);
    cout<<endl<<endl;
    afisare();
    return 0;
}

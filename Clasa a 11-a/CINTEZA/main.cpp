#include <iostream>
#include <fstream>

using namespace std;
int a[100][100],n,m,x,y,sum,s[100],t[100];
void citire(){
    ifstream f("iarna.in");
    f>>n>>m>>x>>y;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
            if(i!=j)a[i][j]=1000;
    int i,j,k;
    while(f>>i>>j>>k)a[i][j]=a[j][i]=k;
    f.close();
}
void prim(int x) {
    int b,c,minim;
    s[x]=1;
    t[x]=0;
    for(int i=1;i<=n;i++) {
        minim=1000;
        for(int j=1;j<=n;j++)
            if(s[i]&&!s[j]&&a[i][j]<minim) {
                minim=a[i][j];
                b=i;
                c=j;
            }
        s[b]=1;
        t[c]=b;
        cout<<c<<" ";
    }
}
void refac(int x) {
    if(t[x])
        refac(t[x]);
    sum+=x;
}
 void afisareMatrice() {
        for(int i=1;i<=n;i++) {
            for(int j=1;j<=n;j++)
                cout<<a[i][j]<<" ";
            cout<<endl;
        }
 }
int main()
{
    ///1.
    citire();
    prim(1);
    refac(n);
    ofstream g("iarna.out");
    g<<sum<<endl;
    ///2.
    prim(x);
    refac(y);
    if(sum<=m)g<<sum<<endl;
    else g<<"nu exista"<<endl;
    g.close();
    return 0;
}

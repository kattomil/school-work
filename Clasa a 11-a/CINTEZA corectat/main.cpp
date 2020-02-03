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
void prim(int r) {
    int b,c,minim;
    s[r]=1;
    t[r]=0;
    for(int k=1;k<n;k++) {
        minim=1000;
        for(int i=1;i<=n;i++)
            for(int j=1;j<=n;j++)
                if(s[i]&&!s[j]&&a[i][j]<minim) {
                    minim=a[i][j];
                    b=i;
                    c=j;
                }
        s[c]=1;
        t[c]=b;
        sum+=minim;
    }
}
void refac(int x) {
    if(t[x]) {
        sum+=a[t[x]][x];
        refac(t[x]);
    }
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
    prim(x);
    ofstream g("iarna.out");
    g<<sum<<endl;
    ///2.
    sum=0;
    cout<<"alegeti un oras: ";int p;cin>>p;
    refac(p);
    if(sum<=m)g<<p<<endl;
    else g<<"NU"<<endl;
    g.close();
    return 0;
}

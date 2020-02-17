#include <iostream>
using namespace std;
int n,m,a[100][100],nrpm;
int main() {
    cin>>n>>m;
    nrpm=n+m-2;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++)
            if(i==1 || j==1) a[i][j]=1;
            else a[i][j]=a[i-1][j]+a[i][j-1];
    cout<<endl;
    for(int i=1;i<=n;i++) {
        for(int j=1;j<=m;j++)
            cout<<a[i][j]<<" ";
        cout<<endl;
    }
    cout<<endl<<a[n][m]<<" pasi pana la margine."<<endl;
    return 0;
}

#include <iostream>

using namespace std;

int n,a[100][100],nrsol;
struct p{int x,y;}s[900],
d[]={ {-1,2},{1,2},{2,-1},{2,1},{1,-2},{-1,-2},{-2,1},{-2,-1} };

void afisareT(int k) {
    nrsol++;
    for(int i=1;i<=k;i++) cout<<"("<<s[i].x<<","<<s[i].y<<") ";
    cout<<endl;
    for(int i=1;i<=n;i++) {
        for(int j=1;j<=n;j++) cout<<a[i][j]<<" ";
        cout<<endl;
    }
    cin.get();
}

void bk(int x, int y, int k) {
        s[k].x=x;
        s[k].y=y;
    if(x>=1&&y>=1&&x<=n&&y<=n&&!a[x][y]) {
        a[x][y]=k;
        if(k==n*n)afisareT(k);
        else for(int i=0;i<8;i++) bk(x+d[i].x, y+d[i].y, k+1);
        a[x][y]=0;
    }
}

int main()
{
    cin>>n;cin.get();
    bk(1,1,1);
    cout<<nrsol;
    return 0;
}

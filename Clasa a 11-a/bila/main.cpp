#include <iostream>
#include <fstream>

using namespace std;

int n,m,a[100][100],nrsol;
struct p{int x,y,h;}s[900],init,
d[4]={ {0,-1}, {1,0}, {0,1}, {-1,0} };


void citire() {
    ifstream f("file.txt");
    f>>n>>m>>init.x>>init.y;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++) f>>a[i][j];
    f.close();
}

void afisareT(int k) {
    nrsol++;
    for(int i=1;i<=k;i++) cout<<"("<<s[i].x<<","<<s[i].y<<") ";
    cout<<endl;
    for(int i=1;i<=n;i++) {
        for(int j=1;j<=m;j++) cout<<a[i][j]<<" ";
        cout<<endl;
    }
    cin.get();
}

void bk(int x, int y, int k) {
        s[k].x=x;
        s[k].y=y;
        s[k].h=a[x][y];
    if(x<1||x>n||y<1||y>m)afisareT(k);
    else if(a[x][y]<s[k-1].h)
            for (int i=0; i<4; i++)
                bk(x+d[i].x,y+d[i].y,k+1);
}

int main() {
    citire();
    s[0].h=999;
    bk(init.x, init.y, 1);
    return 0;
}

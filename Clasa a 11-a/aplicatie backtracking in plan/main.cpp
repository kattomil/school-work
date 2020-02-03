#include <iostream>
#include <fstream>

using namespace std;

int n,m,a[100][100],nrsol;
struct p{int x,y;}s[900],init,
d[8]={{0,-1},{1,0},{0,1},{-1,0},
      {0,-2},{2,0},{0,2},{-2,0}};

void citire() {
    ifstream f("file.txt");
    f>>n>>m>>init.x>>init.y;
    for(int i=1;i<=n;i++) for(int j=1;j<=m;j++) f>>a[i][j];
    f.close();
}

void afisareM() {
    cout<<endl;
    for(int i=1;i<=n;i++) {
        for(int j=1;j<=m;j++) cout<<a[i][j]<<" ";
        cout<<endl;
    }
}

void afisareT(int k) {
    nrsol++;
    for(int i=1;i<=k;i++) cout<<"("<<s[i].x<<","<<s[i].y<<") ";
    afisareM();
    cin.get();
}

void bk(int x, int y, int k) {
        s[k].x=x;
        s[k].y=y;
    if(x<1||x>n||y<1||y>m)afisareT(k);
    else if(!a[x][y]) {
        a[x][y]=2;
        for (int i=0; i<8; i++) bk(x+d[i].x,y+d[i].y,k+1);
        a[x][y]=0;
    }
}

int main() {
    citire();
    afisareM();cout<<endl;
    bk(init.x, init.y, 1);
    return 0;
}

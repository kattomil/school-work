#include <iostream>
#include <fstream>

using namespace std;

ifstream f;
ofstream g;

int n,m,a[100][100],drum[100][100],hmax,solmin,solminM[100][100];
struct p{ int x,y; }init,fin,
d[]={ {0, -1}, {0, 1},
      {-1, 0}, {1, 0},
      {-1, -1},{1, -1},
      {1, 1},  {-1, 1} };

void citire() {
    f.open("date.in");
    f>>n>>m;
    solmin=n*m;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++) {
            f>>a[i][j];
            if(a[i][j]>hmax) {
                hmax=a[i][j];
                fin.x=i;
                fin.y=j;
            }
        }
    f>>init.x>>init.y;
    f.close();
}

void afisare(int z[][100]) {
    g<<"\n";
    for(int i=1;i<=n;i++) {
        for(int j=1;j<=m;j++)
            g<<z[i][j]<<" ";
        g<<"\n";
    }
}

void bk(int x, int y, int k) {
    int A=a[x][y];
    a[x][y]=-1;
    drum[x][y]=k;
    if(x==fin.x&&y==fin.y) {
        afisare(drum);
        if(k<solmin) {
            solmin=k;
            for(int i=1;i<=n;i++)
                for(int j=1;j<=m;j++)
                    solminM[i][j]=drum[i][j];
        }
    }
    else for(int i=0;i<8;i++)
        if((a[x+d[i].x][y+d[i].y]>=A && a[x+d[i].x][y+d[i].y]<=A+1) &&
           (x+d[i].x>=1 && x+d[i].x<=n) && (y+d[i].y>=1 && y+d[i].y<=m))
                bk(x+d[i].x, y+d[i].y, k+1);
    a[x][y]=A;
    drum[x][y]=0;
}

int main() {
    g.open("date.out");g<<"";g.close();
    g.open("date.out", std::ofstream::app);
    citire();
    bk(init.x, init.y, 1);
    g<<"\n Solutia minima: \n";
    afisare(solminM);
    g.close();
    return 0;
}

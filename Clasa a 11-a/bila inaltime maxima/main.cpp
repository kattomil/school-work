#include <stdlib.h>
#include <stdio.h>

using namespace std;

int n,m,a[100][100],drum[100][100],hmax;
typedef struct { int x,y; } p;
p init,fin,d[]={ {0, -1}, {0, 1}, {-1, 0}, {1, 0} };

void citire() {
    FILE * fisier = fopen("file.txt", "r");
    fscanf(fisier, "%i %i %i %i", &n, &m, &init.x, &init.y);
    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++) {
            fscanf(fisier, "%i", &a[i][j]);
            if(a[i][j]>hmax) {
                hmax=a[i][j];
                fin.x=i;
                fin.y=j;
            }
        }
    fclose(fisier);
}
void afisare(int z[][100]) {
    printf("\n");
    for(int i=1;i<=n;i++) {
        for(int j=1;j<=m;j++)
            printf("%i ", z[i][j]);
        printf("\n");
    }
}
void bk(int x, int y, int k) {
    drum[x][y]=k;
    if(x==fin.x&&y==fin.y)
        afisare(drum);
    else for(int i=0;i<4;i++)
        if(a[x+d[i].x][y+d[i].y]>a[x][y] && (x+d[i].x>=1 && x+d[i].x<=n) && (y+d[i].y>=1 && y+d[i].y<=m))
            bk(x+d[i].x, y+d[i].y, k+1);
    drum[x][y]=0;
}
int main()
{
    citire();
    bk(init.x, init.y, 1);
    return 0;
}

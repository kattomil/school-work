#include <stdlib.h>
#include <stdio.h>

using namespace std;

int n,m,a[100][100],drum[100][100],consistent,drumconsistent[100][100];
typedef struct { int x,y; } p;
p init,fin,d[]={ {0, -1}, {0, 1}, {-1, 0}, {1, 0} };

void citire() {
    FILE * fisier = fopen("file.txt", "r");
    fscanf(fisier, "%i %i %i %i %i %i", &n, &m, &init.x, &init.y, &fin.x, &fin.y);
    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++) {
            fscanf(fisier, "%i", &a[i][j]);
            if(a[i][j]==-1)drum[i][j]=-1;
        }
    for(int i=0;i<=n+1;i++)
        for(int j=0;j<=m+1;j++)
            if(i==0 || j==0 || i==n+1 || j==n+1)
                a[i][j]=-2;
    fclose(fisier);
}
void afisare(int z[][100]) {
    printf("\n");
    for(int i=1;i<=n;i++) {
        for(int j=1;j<=m;j++)
            if(z[i][j]==-1)
                printf("X ");
            else
                printf("%i ", z[i][j]);
        printf("\n");
    }
    getchar();
}
void bk(int x, int y, int g, int k) {
    int G=a[x][y];
    drum[x][y]=k;
    a[x][y]=-2;
    if(x==fin.x&&y==fin.y) {
        printf("\n%i grame\n", g);
        afisare(drum);

        if(consistent<g) {
            consistent=g;
            for(int i=1;i<=n;i++)
                for(int j=1;j<=n;j++)
                    drumconsistent[i][j]=drum[i][j];
        }
    } else for(int i=0;i<4;i++)
        if(a[x+d[i].x][y+d[i].y]>=0 && (x+d[i].x>=1 && x+d[i].x<=n) && (y+d[i].y>=1 && y+d[i].y<=m))
            bk(x+d[i].x, y+d[i].y, g+G , k+1);
    a[x][y]=G;
    drum[x][y]=0;
}
int main()
{
    citire();
    printf("toate solutiile:\n");
    bk(init.x, init.y, 0, 1);
    printf("\ndrumul cel mai consistent este:\n\n%i grame \n", consistent);
    afisare(drumconsistent);
    return 0;
}

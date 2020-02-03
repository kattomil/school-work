#include <iostream>
#include <fstream>
#include <windows.h>

using namespace std;

struct poz{int i; int j;}coada[200];
int a[100][100],N,M,x=1,di[4]={-1,0,1,0},dj[4]={0,1,0,-1};

void citire() {
    ifstream f("g.in");
    f>>N>>M;
    for(int i=0;i<=N+1;i++)
        for(int j=0;j<=M+1;j++)
            if(i==0||j==0||i==N+1||j==M+1)
                a[i][j]=-1;
    for(int i=1;i<=N;i++)
        for(int j=1;j<=M;j++)
            f>>a[i][j];
    f.close();
}

void afisare() {
    HANDLE hConsole=GetStdHandle(STD_OUTPUT_HANDLE);
    for(int i=1;i<=N;i++) {
        for(int j=1;j<=M;j++)
            if(a[i][j]==-1){
                SetConsoleTextAttribute(hConsole, 11);///light blue
                cout<<"X ";
            } else {
                SetConsoleTextAttribute(hConsole, 10);///light green
                cout<<a[i][j]<<" ";
            }
        cout<<endl;
    }
    SetConsoleTextAttribute(hConsole, 15);///white
}

void lee(int iStart, int jStart,int ok) {
    int prim=1,ultim=1;
    poz curent={iStart,jStart},vecin;
    a[iStart][jStart]=ok;
    coada[prim]=curent;
    while(prim<=ultim) {
        curent=coada[prim];
        for(int k=0;k<4;k++) {
            vecin.i=curent.i+di[k];
            vecin.j=curent.j+dj[k];
            if(!a[vecin.i][vecin.j]) {
                ultim++;
                coada[ultim]=vecin;
                a[vecin.i][vecin.j]=a[curent.i][curent.j];
            }
        }
        prim++;
    }
}

int main()
{
    citire();
    for(int i=1;i<=N;i++)
        for(int j=1;j<=M;j++)
            if(a[i][j]==0) {
                lee(i,j,x);
                x++;
            }
    afisare();
    return 0;
}

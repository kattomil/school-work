#include <iostream>
#include <fstream>
#include <windows.h>

using namespace std;

struct poz{int i; int j;}coada[200];
int a[100][100],iStart,jStart,N,M,di[4]={-1,0,1,0},dj[4]={0,1,0,-1};
poz libertate;

void citire() {
    ifstream f("g.in");
    f>>N>>iStart>>jStart;
    for(int i=0;i<=N+1;i++)
        for(int j=0;j<=N+1;j++)
            if(i==0||j==0||i==N+1||j==N+1)
                a[i][j]=-1;
    for(int i=1;i<=N;i++)
        for(int j=1;j<=N;j++)
            f>>a[i][j];
    f.close();
}

void afisare() {
    HANDLE hConsole=GetStdHandle(STD_OUTPUT_HANDLE);
    for(int i=1;i<=N;i++) {
        for(int j=1;j<=N;j++)
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

void lee() {
    int prim=1,ultim=1;
    poz curent={iStart,jStart},vecin;
    a[iStart][jStart]=1;
    coada[prim]=curent;
    while(prim<=ultim) {
        curent=coada[prim];
        for(int k=0;k<4;k++) {
            vecin.i=curent.i+di[k];
            vecin.j=curent.j+dj[k];
            if(!a[vecin.i][vecin.j]) {
                ultim++;
                coada[ultim]=vecin;
                a[vecin.i][vecin.j]=a[curent.i][curent.j]+1;
            }
        }
        prim++;
    }
}

void refacTraseu(int i, int j) {
    if(a[i][j]==1)
        cout<<endl<<i<<" - "<<j<<" 1"<<endl;
    else {
        int k=0;
        while(a[i+di[k]][j+dj[k]]!=a[i][j]-1)k++;
        refacTraseu(i+di[k],j+dj[k]);
        cout<<endl<<i<<" - "<<j<<" "<<a[i][j]<<endl;
    }
}

int iesire() {
    int minim=999;
    for(int i=1;i<=N;i++)
        for(int j=1;j<=N;j++)
            if(i==1||j==1||i==N||j==N)
                if(a[i][j]!=-1){
                    if (a[i][j]<minim) {
                        minim=a[i][j];
                        libertate.i=i;
                        libertate.j=j;
                    }
                }
}

int main()
{
    citire();
    lee();
    iesire();
    afisare();
    refacTraseu(libertate.i,libertate.j);
    return 0;
}

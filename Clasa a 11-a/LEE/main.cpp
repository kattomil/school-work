#include <iostream>
#include <fstream>

using namespace std;

struct poz{int i; int j;}coada[200];
int a[100][100],iStart,jStart,iFinal,jFinal,N,M,di[4]={-1,0,1,0},dj[4]={0,1,0,-1};

void citire() {
    ifstream f("graf.in");
    f>>N>>M>>iStart>>jStart>>iFinal>>jFinal;
    for(int i=0;i<=N+1;i++)
        for(int j=0;j<=M+1;j++)
            if(i==0||j==0||i==N+1||j==M+1)
                a[i][j]=-1;
    int i,j;
    while(f>>i>>j)a[i][j]=-1;
    f.close();
}

void afisare() {
    for(int i=0;i<=N+1;i++) {
        for(int j=0;j<=M+1;j++)
            cout<<a[i][j]<<" ";
        cout<<endl;
    }
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

int main()
{
    citire();
    lee();
    afisare();
    refacTraseu(iFinal,jFinal);
    return 0;
}

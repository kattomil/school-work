#include <iostream>
#include <fstream>
#include <cstring>
#include <windows.h>

using namespace std;

struct poz{int i; int j;}coada[200];
int a[100][100],b[100][100],rez[100][100],RiStart,RjStart,JiStart,JjStart,N,M;
int di[]={0,1,1,1,0,-1,-1,-1};
int dj[]={-1,-1,0,1,1,1,0,-1};

void citire() {
    ifstream f("rj.in");
    f>>N>>M;
    f.get();
    for(int i=0;i<=N+1;i++)
        for(int j=0;j<=M+1;j++)
            if(i==0||j==0||i==N+1||j==M+1)
                a[i][j]=b[i][j]=-1;
    char x[102];
    for(int i=1;i<=N;i++) {
        f.getline(x,M+1);
        for(unsigned int j=1;j<=strlen(x);j++) {
            if(x[j-1]=='X') {
                a[i][j]=b[i][j]=-1;
            } else if (x[j-1]=='R'){
                a[i][j]=1;
                RiStart=i;
                RjStart=j;
            } else if (x[j-1]=='J'){
                b[i][j]=1;
                JiStart=i;
                JjStart=j;
            }
        }
    }
    f.close();
}
void afisare(int z[][100]) {
    HANDLE hConsole;
    hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    for(int i=0;i<=N+1;i++) {
        for(int j=0;j<=M+1;j++)
            if(z[i][j]==-1){
                SetConsoleTextAttribute(hConsole, 12);
                cout<<"X ";
            }
            else if(z[i][j]==0){
                SetConsoleTextAttribute(hConsole, 15);
                cout<<"0 ";
            }
            else if(z[i][j]==1) {
                SetConsoleTextAttribute(hConsole, 14);
                cout<<"P ";
            } else {
                SetConsoleTextAttribute(hConsole, z[i][j]);
                cout<<z[i][j]<<" ";
            }
        cout<<endl;
    }
    cout<<endl;
}
void lee(int z[][100], int iStart, int jStart) {
    int prim=1,ultim=1;
    poz curent={iStart,jStart},vecin;
    z[iStart][jStart]=1;
    coada[prim]=curent;
    while(prim<=ultim) {
        curent=coada[prim];
        for(int k=0;k<8;k++) {
            vecin.i=curent.i+di[k];
            vecin.j=curent.j+dj[k];
            if(!z[vecin.i][vecin.j]) {
                ultim++;
                coada[ultim]=vecin;
                z[vecin.i][vecin.j]=z[curent.i][curent.j]+1;
            }
        }
        prim++;
    }
}

void drum(int a[][100],int b[][100]) {
     for(int i=0;i<=N+1;i++)
        for(int j=0;j<=M+1;j++)
            if(a[i][j]!=-1 && a[i][j]==b[i][j])
                rez[i][j]=a[i][j];
}
void intersectie() {
    int minn=1000;
    for(int i=1;i<=N;i++)
         for(int j=1;j<=M;j++)
             if(rez[i][j]!=0)
                    minn=min(minn,rez[i][j]);
     for(int i=1;i<=N;i++)
        for(int j=1;j<=M;j++)
            if(minn==rez[i][j])
                cout<<i<<"-"<<j<<" "<<rez[i][j];
}
int main()
{
    citire();
    lee(a,RiStart,RjStart);
    lee(b,JiStart,JjStart);
    afisare(a);
    afisare(b);
    drum(a,b);
    intersectie();
    return 0;
}

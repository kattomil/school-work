#include <iostream>
#include <fstream>
#include <windows.h>

using namespace std;

const int NMAX = 5;

int matrice[5][5]={0, 0, -1, 0 , 0,
                                          0, -1,  0, -1, 0,
                                          0, -1, -1, -1, 0,
                                          -1, 0, 0, 0, -1,
                                          -1, -1, -1, -1, -1 };

int matriceFill[NMAX][NMAX];
int a[100][100],N;
int dI[]={-1,0,1,0},
       dJ[]={0,-1,0,1};    //! NORD -> VEST -> SUD -> EST
int numarul_zonei;

void citire() {
    ifstream f("g.in");
    f>>N;
    for(int i=1;i<=N;i++)
        for(int j=1;j<=N;j++)
            f>>a[i][j];
    f.close();
}

bool verificareIJ(int i, int j)
{
       if (i<0 || j < 0 || i >=NMAX || j>=NMAX)
              return false;
       if(matriceFill[i][j]!=0)
              return false;
       return true;
}
void Fill(int i, int j)
{
       matriceFill[i][j]=numarul_zonei;
       for(int dir=0;dir<4;dir++)
       {
              int i_nou =i + dI[dir];
              int j_nou =j + dJ[dir];

              if (verificareIJ(i_nou,j_nou) && matrice[i][j] == matrice[i_nou][j_nou])
                            Fill(i_nou,j_nou);
       }
}
int main()
{
       for(int i=0;i<NMAX;i++)
              for(int j=0;j<NMAX;j++)
                     if(!matriceFill[i][j] && matrice[i][j]!=-1)
                     {
                            numarul_zonei++;
                            Fill(i,j);
                     }

    //! afisare matrice dupa fill
    HANDLE hConsole=GetStdHandle(STD_OUTPUT_HANDLE);
    for(int i=0;i < NMAX; i++)
    {
       for(int j=0;j < NMAX; j++)
       {
              if (!matriceFill[i][j]) {
                    SetConsoleTextAttribute(hConsole, 11);
                     cout<<"* ";
              } else {
                     SetConsoleTextAttribute(hConsole, 10);
                     cout<<matriceFill[i][j]<<' ';
              }
       }
       cout<<'\n';
    }
    SetConsoleTextAttribute(hConsole, 15);
    return 0;
}

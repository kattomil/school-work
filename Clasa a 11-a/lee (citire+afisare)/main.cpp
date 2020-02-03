#include <iostream>
#include <fstream>

using namespace std;

struct poz{int i; int j;}c[200];
int a[100][100],iStart,jStart,iFinal,jFinal,N,M;

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

int main()
{
    citire();
    afisare();
    return 0;
}

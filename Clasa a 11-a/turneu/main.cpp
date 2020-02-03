#include <iostream>
#include <fstream>

using namespace std;
int m[100][100],n,viz[100],c[100];

void citire() {
    ///
    ifstream f("g.in");
    f>>n;
    int i,j;
    while(f>>i>>j) m[i][j]=1;
    f.close();
}

void scriere() {
    ///
    ofstream g("g.in");
    g<<n<<endl;
    for (int i=1;i<=n;i++)
        for (int j=1;j<=n;j++)
            if (m[i][j]) g<<i<<" "<<j<<endl;
}

void turneu() {
    ///
        for (int i=1;i<=n;i++)
            for (int j=i+1;j<=n;j++)
                    if ((m[i][j]&&m[j][i]))
                        m[j][i]=0;
                    else if ((!m[i][j]&&!m[j][i]))
                        m[i][j]=1;
        scriere();
}

int pI(int start) {
    ///
    int p=1, u=1, nod, ok=1;
     c[p]=start;
     viz[start]=1;
     while(p<=u){
         nod=c[p];
         for(int i=1; i<=n; i++){
             if(m[nod][i] && !viz[i]) {
                 u++;
                 c[u]=i;
                 viz[i]=viz[nod]+1;
             }
             p++;
         }
     }
     for (int i=1; i<=n; i++) viz[i]=viz[i]-1;
     for (int i=1;i<=n;i++)
        if (viz[i]>3 || viz[i]<0) ok=0;
     return ok;
}

void prop4() {
    ///
    for(int i=1;i<=n;i++) {
        for (int j=1;j<=n;j++) viz[j]=0;
        if (pI(i)) cout << i << " ";
    }
    cout << endl;
}

int main()
{
    citire();
    turneu();
    prop4();
    return 0;
}

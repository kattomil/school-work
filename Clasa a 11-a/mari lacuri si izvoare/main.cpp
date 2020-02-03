#include <iostream>
#include <fstream>

using namespace std;

int n,m[100][100],a[100];

void citire() {
    ifstream f("g.in");
    f>>n;
    int i,j;
    while(f>>i>>j)m[i][j]=1;
    f.close();
}

void mari() {
    int k=0;
    for (int i=1;i<=n;i++) {
        int ok=1;
        for (int j=1;j<=n;j++)
            if(m[i][j]) ok=0;
        if (ok) {
            cout << i << " ";
            a[i]=1;
            k++;
        }
    }
    cout<<k<<endl;
}

void izvoare() {
    int k=0;
    for (int i=1;i<=n;i++) {
        int ok=1;
        for (int j=1;j<=n;j++)
            if(m[j][i]) ok=0;
        if (ok) {
            cout << i << " ";
            a[i]=2;
            k++;
        }
    }
    cout<<k<<endl;
}

void rauri() {
    for (int i=1;i<=n;i++)
        if(!a[i]) {
            a[i]=3;
            cout<<i<<" ";
        }
    cout<<endl;
}

int main()
{
    citire();
    mari();
    izvoare();
    rauri();
    return 0;
}

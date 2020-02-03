#include <iostream>
#include <fstream>

using namespace std;

int a[100][100],n;

void citire() {
    ifstream f("g.in");
    f>>n;
    int i,j;
    while(f>>i>>j)a[i][j]=1;
}

void afisare() {
    for (int i=1;i<=n;i++) {
        for (int j=1;j<=n;j++)
            cout<<a[i][j]<<" ";
        cout<<endl;
    }
}

void pa() {
    for (int i=1; i<=n; i++) {
        int k=1;
        for (int j=1; j<=n; j++)
            if (a[i][j]!=0 && i!=j) k=0;
        if (k)
            for (int j=1; j<=n; j++)
                if (a[j][i]!=0 && i!=j) k=0;
        if (k) cout << i << " ";
    }
}

void pb() {
    for (int i=1; i<=n; i++) {
        int k=1;
        for (int j=1; j<=n; j++)
            if (a[i][j]!=0 && i!=j) k=0;
        if (k) cout << i << " ";
    }
}

void pc() {
    int max=-1, maxn=-1;
    for (int i=1; i<=n; i++) {
        int k=0;
        for (int j=1; j<=n; j++)
            if (a[j][i]!=0 && i!=j) k++;
        if(k>max) {
            max=k;
            maxn=i;
        }
    }
    cout << maxn;
}

void pd() {
    for (int i=1; i<=n; i++) {
        int k=1;
        for (int j=1; j<=n; j++)
            if (a[i][j]!=0 && i!=j) k=0;
        if (k)
            for (int j=1; j<=n; j++)
                if (a[j][i]==0 && i!=j) k=0;
        if (k) cout << i << " ";
    }
}

int main()
{
    citire();
    afisare();
    return 0;
}

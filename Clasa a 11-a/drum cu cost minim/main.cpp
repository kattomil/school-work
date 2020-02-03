#include <iostream>
#include <fstream>

using namespace std;

int n,ac[100][100];

void citire() {
    ifstream f("g.in");
    f>>n;
    for (int i=1;i<=n;i++)
        for (int j=1; j<=n; j++)
            f>>ac[i][j];
}

void afisare() {
    for (int i=1;i<=n;i++) {
        for (int j=1; j<=n; j++)
            cout<<ac[i][j]<<" ";
        cout<<endl;
    }
}

void dc() {
    for (int k=1;k<=n;k++)
        for (int i=1;i<=n;i++)
            for (int j=1;j<=n;j++)
                if (k!=i&&k!=j&&i!=j&&ac[i][j]>ac[i][k]+ac[k][j])
                    ac[i][j]=ac[i][k]+ac[k][j];
}

void d(int i, int j) {
    int k=0, l=1;
    while (l<=n&&j!=l) {
        if (i!=l && j!=l && ac[i][j]==ac[i][l]+ac[l][j]) {
            d(i,l);
            d(l,k);
            k=1;
        }
        l++;
    }
    if (!k) cout << j << " ";
}

int main()
{
    citire();
    afisare();
    /**
    cout<<endl;
    dc();
    afisare();
    cout<<endl;
    int i,j;
    cin>>i>>j;
    d(i,j);
    afisare();
    */
    return 0;
}

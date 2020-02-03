#include <iostream>
#include <fstream>

using namespace std;

int a[100][100],n;

void c() {
    ifstream f("g.in");
    f>>n;
    for (int i=1;i<=n;i++)
        for (int j=1;j<=n;j++)
            if (i!=j) a[i][j]=99;
    int i,j;
    while(f>>i>>j) a[i][j]=1;
}

void af() {
    for (int i=1;i<=n;i++) {
        for (int j=1;j<=n;j++)
            cout<<a[i][j]<<" ";
        cout<<endl;
    }
}

void dc() {
    for (int k=1;k<=n;k++)
        for (int i=1;i<=n;i++)
            for (int j=1;j<=n;j++)
                if (k!=i&&k!=j&&i!=j&&a[i][j]>a[i][k]+a[k][j])
                    a[i][j]=a[i][k]+a[k][i];
}

int main()
{
    c();
    af();
    dc();
    return 0;
}

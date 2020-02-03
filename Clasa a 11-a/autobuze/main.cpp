#include <iostream>
#include <fstream>

using namespace std;

int a[100][100],n,s;

void citire() {
    int i,j,y,z;
    ifstream f("g.in");
    f>>n;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
            if (i!=j)
                a[i][j]=1000;
    while(f>>i>>j>>y>>z)
        a[i][j]=z-y;
    f.close();
}

void rf() {
    for(int k=1;k<=n;k++)
        for(int i=1;i<=n;i++)
            for(int j=1;j<=n;j++)
                if (k!=i&&k!=j&&i!=j)
                    if(a[i][j]>a[i][k]+a[k][j])
                        a[i][j]=a[i][k]+a[k][j];
}

void d(int i,int j) {
    int ok=0, k=1;
    while(k<=n&&!ok) {
        if (i!=k&&j!=k)
            if (a[i][j]==a[i][k]+a[k][j]) {
                d(i,k);
                d(k,j);
                ok=1;
            }
        k++;
    }
    if (!ok) {
        cout << j << " ";
        s+=a[i][j];
    }
}

int main()
{
    citire();
    rf();
    int x,y;
    cout << "Plecare: ";
    cin>>x;
    cout << "Sosire: ";
    cin>>y;
    cout << "Autocarele: " << x << " ";
    d(x,y);
    cout << endl << "Timpul petrecut pe drum: ";
    cout << s << " ore";
    return 0;
}

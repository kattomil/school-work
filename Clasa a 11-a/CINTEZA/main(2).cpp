#include <iostream>
#include <fstream>

using namespace std;

int n,a[100][100],x,y,z,s;

void citire() {
    ifstream f("g.in");
    f>>n;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
            if(i!=j) a[i][j]=1000;
    int i,j,k;
    while(f>>i>>j>>k) a[i][j]=k;
    f.close();
}

void rf() {
    for(int k=1;k<=n;k++)
        for(int i=1;i<=n;i++)
            for(int j=1;j<=n;j++)
                if(i!=j&&k!=i&&k!=j)
                    if (a[i][j]>a[i][k]+a[k][j])
                        a[i][j]=a[i][k]+a[k][j];
}

void drm(int i, int j) {
    int ok=1,k=1;
    while(k<=n&&ok) {
        if(k!=i&&k!=j)
            if(a[i][j]==a[i][k]+a[k][j]) {
                drm(i,k);
                drm(k,j);
                ok=0;
            }
        k++;
    }
    if(ok) {
        cout << j << " ";
        s+=a[i][j];
    }
}

int main()
{
    citire();
    rf();
    cout<<"Localitatea firmei: ";
    cin>>x;
    cout<<"Localitatea A: ";
    cin>>y;
    cout<<"Localitatea B: ";
    cin>>z;
    if (a[x][y]+a[y][z]+a[z][x]<=a[x][z]+a[z][y]+a[y][x]) {
        drm(x,y);
        drm(y,z);
        drm(z,x);
    } else {
        drm(x,z);
        drm(z,y);
        drm(y,x);
    }
    cout << endl << s << " km";
    return 0;
}

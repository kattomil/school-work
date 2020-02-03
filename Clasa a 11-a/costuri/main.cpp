#include <iostream>
#include <fstream>

using namespace std;

int a[100][100],m=9,n;

void citire() {
    ifstream f("g.in");
    f >> n;
    int i,j,k;
    for (i=1; i<=n; i++)
        for (j=1; j<=n; j++)
            a[i][j]=m;
    i=1;
    while(i<=n) {
        a[i][i]=00;
        i++;
    }
    while(f>>i>>j>>k)
        a[i][j]=k;
    for (i=1; i<=n; i++) {
        for (j=1; j<=n; j++)
            cout << a[i][j] << " ";
        cout << endl;
    }
    f.close();
}

int main()
{
    citire();
    return 0;
}

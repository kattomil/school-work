#include <iostream>

using namespace std;

void citire(int&n, int&m);
void afisare(int a[11][11], int n, int m);
void rezolvare(int a[11][11], int n, int m);

int main()
{
    int a[11][11], n, m;
    citire(n,m);
    rezolvare(a,n,m);
    afisare(a,n,m);
    return 0;
}

void citire(int&n, int&m) {
    do {
        cout << "n = ";
        cin >> n;
        if (n<2 || n>10) cout << "Numar invalid. [2, 10]\n";
    } while (n<2 || n>10);
    do {
        cout << "m = ";
        cin >> m;
        if (m<2 || m>10) cout << "Numar invalid. [2, 10]\n";
    } while (m<2 || m>10);
}

void afisare(int a[11][11], int n, int m) {
    for (int i=1; i<=n; ++i) {
        for (int j=1; j<=m; ++j)
            cout << a[i][j] << " ";
        cout << endl;
    }
}

void rezolvare(int a[11][11], int n, int m) {
    for (int i=1; i<=n; ++i)
        for (int j=1; j<=m; ++j)
            if (i>j) a[i][j] = j;
            else a[i][j] = i;
}

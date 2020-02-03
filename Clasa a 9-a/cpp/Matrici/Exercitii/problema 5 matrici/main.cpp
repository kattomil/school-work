#include <iostream>

using namespace std;

void citire(int&n);
void afisare(int a[25][25], int n);
void rezolvare(int a[25][25], int n);

int main()
{
    int a[25][25], n;
    citire(n);
    rezolvare(a,n);
    afisare(a,n);
    return 0;
}

void citire(int&n) {
    do {
        cout << "n = ";
        cin >> n;
        if (n<2 || n>25) cout << "Numar invalid. [2, 10]\n";
    } while (n<2 || n>25);
}

void afisare(int a[25][25], int n) {
    for (int i=1; i<=n; ++i) {
        for (int j=1; j<=n; ++j)
            cout << a[i][j] << " ";
        cout << endl;
    }
}

void rezolvare(int a[25][25], int n) {
    for (int i=1; i<=n; ++i)
        for (int j=1; j<=n; ++j)
            if (i+j==n+1) a[i][j] = 0;
            else a[i][j] = n-i+1;
}

#include <iostream>

using namespace std;

/**
Se da o matrice patrata a[n][n];
Afisati elementele care sunt strict mai mici decat toti vecinii
*/

int main()
{
    int n, k, exista;
    do {
    cout << "n=";
    cin >> n;
    if (n<=0) cout << "Numar invalid.\n";
    } while (n <= 0);

    int a[n][n];

    for (int i=0; i<n; ++i)
        for (int j=0; j<n; ++j) {
            cout << "a[" << i << "][" << j << "]=";
            cin >> a[i][j];
        }

    for (int i=0; i<n; ++i)
        for (int j=0; j<n; ++j) {
            k = 1;

            if (j-1>=0 && a[i][j-1]<=a[i][j]) k=0;
            else if (i-1>=0 && a[i-1][j]<=a[i][j]) k=0;
            else if (i+1<n && a[i+1][j]<=a[i][j]) k=0;
            else if (j+1<n && a[i][j+1]<=a[i][j]) k=0;

            if (k==1) {
                cout << a[i][j] << " ";
                exista = 1;
            }
        }

    if (exista != 1) cout << "Nu exista.";

    return 0;
}

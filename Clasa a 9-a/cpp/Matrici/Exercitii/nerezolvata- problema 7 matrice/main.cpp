#include <iostream>

using namespace std;

int main()
{
    int n, a[21][21];;

    do {
        cout << "n = ";
        cin >> n;
        if (n<2 || n>23) cout << "Numar invalid.\n";
    } while (n<2 || n>23);

    for (int i=0, k=1; i<n; ++i) {
        for (int j=0; j<n; ++j, k++) {
            a[i][j] = k;
            if (k==9) k=1;
        }
        if (k==9) k=1;
    }

    for (int i=0; i<n; ++i) cout << a[0][i] << " ";
    for (int i=1; i<n; ++i) cout << a[i][n-1] << " ";
    for (int i=n-2; i>=0; --i) cout << a[n-1][i] << " ";
    for (int i=n-2; i>=0; --i) cout << a[i][0] << " ";
    return 0;
}

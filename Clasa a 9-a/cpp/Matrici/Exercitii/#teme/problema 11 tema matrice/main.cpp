#include <iostream>

using namespace std;

int main()
{
    int n=0, m=0, i=0;

    cout << "m: ";
    do {
        cin >> m;
        if (m<=0) cout << "Numar invalid.\n";
    } while (m<=0);

    cout << "n: ";
    do {
        cin >> n;
        if (n<=0) cout << "Numar invalid.\n";
    } while (n<=0);

    int matrice[11][11];

    for (i=0; i<m; ++i)
        for (int j=0; j<n; ++j) {
            cout << "matrice [" << i << "][" << j << "] = ";
            cin >> matrice[i][j];
        }

    cout << "Matricea ta :\n";
    for (i=0; i<m; ++i) {
        for (int j=0; j<n; ++j)
            cout << matrice[i][j] << " ";
        cout << endl;
    }

    int v[50], k=0;
    for (i=0; i<m; ++i) {
        v[i] = matrice[i][0];
        for (int j=1; j<n; ++j)
            if (matrice[i][j] > v[i])
                v[i] = matrice[i][j];
    }

    cout << "Numerele maxime: ";
    for (int j=0; j<i; ++j) cout << v[j] << " ";
    cout << endl;

    int min = v[0];
    for (int i=1; i<m; ++i)
        if (v[i]<min)
            min=v[i];

    cout << "Numarul minim dintre numerele maxime: ";
    cout << min;
    return 0;
}

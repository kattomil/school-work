#include <iostream>

using namespace std;

void citire_matriceP(int a[10][10], int&n);
void afisare_matriceP(int a[10][10], int n);

int main()
{
    int a[10][10], n=0;
    citire_matriceP(a,n);
    afisare_matriceP(a,n);
    return 0;
}

void citire_matriceP(int a[10][10], int&n) {
    cout << "n = ";
    cin >> n;
    for (int i=0; i<n; ++i)
        for (int j=0; j<n; ++j) {
            cout << "matrice[" << i << "][" << j << "]=";
            cin >> a[i][j];
    }
}

void afisare_matriceP(int a[10][10], int n) {
    for (int i=0; i<n; ++i) {
        for (int j=0; j<n; ++j)
            cout << a[i][j];
        cout << '\n';
    }
}

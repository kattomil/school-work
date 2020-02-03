#include <iostream>

using namespace std;

void citire(int x[], int&nx) {
    cout << "n=";
    cin >> nx;
    for (int i=0; i<nx; ++i) {
        cout << "x[" << i << "]=";
        cin >> x[i];
    }
}

void afisare(int x[], int&nx) {
    for (int i=0; i<nx; ++i) cout << "\n" << x[i];
}

int main()
{
    int A[10], na, B[10], nb, C[10], nc;
    citire(A, na);
    citire(B, nb);
    citire(C, nc);
    cout << "\nV[A]";
    afisare(A, na);
    cout << "\nV[B]";
    afisare(B, nb);
    cout << "\nV[C]";
    afisare(C, nc);
    return 0;
}

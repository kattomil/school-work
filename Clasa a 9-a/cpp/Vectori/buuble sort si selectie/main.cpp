#include <iostream>

using namespace std;

void citire(int V[], int&n);
void afisare(int V[], int n);
void BubbleSort(int V[], int n);
void Selectie(int V[], int n);

int A[100], na, B[100], nb;

int main()
{
    citire(A, na);
    citire(B, nb);
    cout<<endl;
    afisare(A, na);
    afisare(B, nb);
    BubbleSort(A, na);
    Selectie(B, nb);
    cout << "\nDupa sortare:\n\n";
    afisare(A, na);
    afisare(B, nb);
    return 0;
}

void citire(int V[], int&n) {
    cout << "n = ";
    cin >> n;
    for (int i=0; i<n; ++i) {
        cout << "V[" << i << "]=";
        cin >> V[i];
    }
}

void afisare(int V[], int n) {
    cout << "Numerele din vectorul tau sunt: [ ";
    for (int i=0; i<n; ++i) {
        cout << V[i] << " ";
    }
    cout << "]\n";
}

void BubbleSort(int V[], int n) {
    int k=1;
    do {
        k=1;
        for (int i=0; i<n-1; ++i)
            if (V[i] > V[i+1]) {
                swap(V[i], V[i+1]);
                k = 0;
            }
    } while (k == 0);
}

void Selectie(int V[], int n) {
    for (int i=0; i<n-1; ++i)
        for (int j=i+1; j<n; ++j)
            if (V[i] > V[j]) swap(V[i], V[j]);
}

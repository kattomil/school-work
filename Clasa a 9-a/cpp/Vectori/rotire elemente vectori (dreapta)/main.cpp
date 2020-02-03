#include <iostream>

using namespace std;

void citire(int v[], int&n);
void rotire1(int v[], int n);
void rotire2(int v[], int n);
void afisare(int v[], int n);

int main()
{
    int v[10001], n;
    citire(v,n);
    afisare(v,n);
    rotire1(v,n);
    //rotire2(v,n);
    afisare(v,n);
    return 0;
}

void citire(int v[], int&n) {
    cout << "n=";
    cin >> n;
    for (int i=0; i<n; ++i) {
        cout << "v[" << i+1 << "]=";
        cin >> v[i];
    }
}


void afisare(int v[], int n) {
    for (int i=0; i<n; ++i) cout << v[i] << " ";
    cout<<endl<<endl;
}

void rotire1(int v[], int n) {
    int aux = v[n-1];
    for (int i=1; i<n; ++i) v[n-i] = v[n-i-1];
    v[0] = aux;
}

void rotire2(int v[], int n) {
    int aux = v[n-1];
    for (int i=n-1; i>=1; --i) v[i] = v[i-1];
    v[0] = aux;
}

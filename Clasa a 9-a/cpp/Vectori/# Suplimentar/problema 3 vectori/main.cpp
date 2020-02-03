#include <iostream>

using namespace std;

void citire(int v[], int&n);
void afisare(int v[], int n);

int main()
{
    int v[10001], n;
    citire(v,n);
    afisare(v,n);
    /**
    cout << "n = ";
    cin >> n;
    for (int i=0; i<n; ++i) {
        cout << "v[" << i << "]=";
        cin >> v[i];
    }
    for (int i=1; i<n; i+=2)
        if (v[i]%2==0)
            cout << v[i] << " ";
    cout << endl;
    */
    return 0;
}

void citire(int v[], int&n) {
    cout << "n = ";
    cin >> n;
    for (int i=0; i<n; ++i) {
        cout << "v[" << i << "]=";
        cin >> v[i];
    }
}

void afisare(int v[], int n) {
    for (int i=1; i<n; i+=2)
        if (v[i]%2==0)
            cout << v[i] << " ";
    cout << endl;
}

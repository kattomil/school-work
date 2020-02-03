#include <iostream>

using namespace std;

void completare(int a[10][10], int & n);
void afisare(int a[10][10], int n);

int main()
{
    int a[10][10], n;
    completare(a,n);
    afisare(a,n);
    return 0;
}

void completare(int a[10][10], int & n) {
    cout << "n = ";
    cin >> n;
    for (int i=0; i<n; ++i)
        for (int j=0; j<n; ++j)
            if (i==j) a[i][j] = 0;
            else a[i][j] = 1;
}

void afisare(int a[10][10], int n) {
    for (int i=0; i<n; ++i) {
        for (int j=0; j<n; ++j)
            cout << a[i][j];
    cout << endl;
    }
}

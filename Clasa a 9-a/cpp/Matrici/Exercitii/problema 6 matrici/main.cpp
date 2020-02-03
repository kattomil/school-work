#include <iostream>
#include <cmath>

using namespace std;

void citireNP(int&n, int&p);
void afisare(int a[10][10], int n, int p);
void rezolvare(int a[10][10], int n, int p);


int main()
{
    int n, p, a[10][10];
    citireNP(n,p);
    rezolvare(a,n,p);
    afisare(a,n,p);
    return 0;
}

void afisare(int a[10][10], int n, int p) {
    for (int i=0; i<n; ++i) {
        for (int j=0; j<p; ++j)
            cout << a[i][j] << " ";
    cout << endl;
    }
}

void citireNP(int&n, int&p) {
    do {
        cout << "n = ";
        cin >> n;
        if (n<2 || n>20) cout << "Numar invalid.\n";
    } while (n<2 || n>20);
    do {
        cout << "p = ";
        cin >> p;
        if (p<1 || p>20) cout << "Numar invalid.\n";
    } while (p<1 || p>20);
}

void rezolvare(int a[10][10], int n, int p) {
    for(int i=0, k=1; i<n; i++)
        for(int j=0; j<p; j++, k+=2)
            a[i][j] = k*k;
}

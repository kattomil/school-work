#include <iostream>

using namespace std;

//teza

int main()
{
    //1.
    int n;
    cout << "n=";
    cin>>n;
    int a[n][n];
    for (int i=0; i<n; ++i) {
        for (int j=0; j<n; ++j) {
            cout << "a[" << i << "][" << j << "]=";
            cin >> a[i][j];
        }
    }

    //2.
    cout << endl << "Matricea ta:\n";
    for (int i=0; i<n; ++i) {
        for (int j=0; j<n; ++j) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    //3.
    int v[n*n], nv=0;
    for (int i=0; i<n; ++i) {
        for (int j=0; j<n; j+=2) {
            v[nv] = a[i][j];
            nv++;
        }
    }
    cout << endl << "Vectorul tau: ";
    for (int i=0; i<nv; ++i) cout << v[i] << ' ';
    cout << endl;

    //4.
    int k=1;
    do {
        k=1;
        for (int i=0; i<nv-1; ++i)
            if (v[i] < v[i+1]) {
                swap(v[i], v[i+1]);
                k=0;
            }
    } while (k==0);
    cout << endl << "Vectorul tau ordonat: ";
    for (int i=0; i<nv; ++i) cout << v[i] << ' ';
    cout << endl;

    //5.
    long long int s=0, ns=0;
    for (int i=0; i<n; ++i) {
        for (int j=0; j<n; ++j) {
            if (i<j && a[i][j]>0) {
                s=s+a[i][j];
                ns++;
            }
        }
    }
    cout << endl << "MA a elementelor pozitive deasupra diagonala principala este : " << (float) s/ns << endl;

    return 0;
}

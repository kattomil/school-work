#include <iostream>
#include <stdlib.h>

using namespace std;

/**
se citeste a[10][10]
sa se ordoneze crescator elementele de pe linia 5
sa se ordoneze descrescator elementele de pe coloana 7
*/

int main()
{
    int a[10][10];

    for (int i=0; i<10; ++i) {
        for (int j=0; j<10; ++j) {
            cout << "a[" << i << "][" << j << "]="<<a[i][j];
            cin >> a[i][j];
        }
    }

    cout << "Vectorul tau : \n";
    for (int i=0; i<10; ++i) {
        for (int j=0; j<10; ++j) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    for (int i=0; i<10; ++i) {
        for (int j=0; j<10; ++j) {
            int k=1;
            if (i==4) {
                do {
                    k=1;
                    for (int i=0; i<10-1; ++i) {
                        if (a[i][j] < a[i][j+1]) {
                            swap(a[i][j], a[i][j+1]);
                            k=0;
                        }
                    }
                } while (k==0);
            } else if (i==6) {
                do {
                    k=1;
                    for (int i=0; i<10-1; ++i) {
                        if (a[i][j] > a[i][j+1]) {
                            swap(a[i][j], a[i][j+1]);
                            k=0;
                        }
                    }
                } while (k==0);
            }
        }
    }

    cout << "Vectorul ordonat: \n";
    for (int i=0; i<10; ++i) {
        for (int j=0; j<10; ++j) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}

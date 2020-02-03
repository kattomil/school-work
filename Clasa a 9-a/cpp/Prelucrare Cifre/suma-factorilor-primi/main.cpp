#include <iostream>

using namespace std;

int main() {
    int n, d=2, p=0, suma=0;
    cout << "n = ";
    cin >> n;
    while (n > 1) {
        while (n%d == 0) {
            n = n/d;
            p = p+1;
        }
        if (p > 0) {
            suma = suma + p;
        }
        d = d+1;
        p = 0;
    }
    cout << "suma puterilor este egala cu " << suma;
    return 0;
}

#include <iostream>

using namespace std;

int main() {
    int n, cifra;
    cout << "introduceti o valoare pentru n!" << endl << "n = ";
    cin >> n;
    cout << "Cifrele: " << endl;
    if (n == 0) {
        cout << "0" << endl;
    }
    if (n < 0) {
        cout << "Nu sunt programat pentru a arata cifrele unui numar negativ ;D" << endl;
    }
    while (n > 0) {
        cifra = n % 10;
        n = n/10;
        cout << cifra << endl;
    }
    return 0;
}

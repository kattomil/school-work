#include <iostream>

using namespace std;

int main() {
    int a,b;
    cout << "Introduceti 2 valori pentru a si b!\n";
    cin >> a >> b;
    while (a!=b) {
        if (a > b) {
            a = a - b;
        } else {
            b = b - a;
        }
    }
    cout << "cmmdc = " << a;
    return 0;
}

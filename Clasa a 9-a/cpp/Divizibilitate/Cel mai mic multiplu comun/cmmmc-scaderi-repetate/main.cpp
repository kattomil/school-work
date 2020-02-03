#include <iostream>

using namespace std;

int main() {
    int a,b,p;
    cout << "Introduceti 2 valori pentru a si b!\n";
    cin >> a >> b;
    p=a*b;
    while (a!=b) {
        if (a > b) {
            a = a - b;
        } else {
            b = b - a;
        }
    }
    cout << "cmmmc = " << p/a;
    return 0;
}

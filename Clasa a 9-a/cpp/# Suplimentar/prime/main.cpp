#include <iostream>

using namespace std;

/**
Se citește un număr natural n. Să se determine suma divizorilor impari ai săi.
*/

int main() {
    int a,b;
    cout << "a = ";
    cin >> a;
    cout << "b = ";
    cin >> b;
    if (b < a) {
        int aux = a;
        a = b;
        b = aux;
    }
    for (int d=a; d <= b; d++) {
            int p = 0;
        if (b%d == 0) {
            cout << d << " ";
        }
    }
    return 0;
}

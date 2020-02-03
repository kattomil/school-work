#include <iostream>

using namespace std;

int main()
{
    int n,s,i;

    cout << "Salutare! Scrie o valoare pentru n!" << endl << "n = ";
    cin >> n;
    cout << endl << "Bun! Deci n = " << n << endl << endl;
    s = 1;
    i = n;
    while (i >= 1) {
        s = s * i;
        i = i - 1;
    }
    cout << "Rezolvat! Suma = " << s << endl;
    return 0;
}

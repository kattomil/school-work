// Sa se calculeze produsul termenilor impari dintr-un sir de numere pozitive
#include <iostream>

using namespace std;

int main()
{
    cout << "Numar = ";
    int x;
    int prod = 1;
    cin >> x;
    while (x > 0) {
        cout << "Numar = ";
        if (x%2 != 0) {
            prod = prod * x;
        }
        cin >> x;
    }
    cout << "Produsul numerelor impare = " << prod;
    return 0;
}

// Sa se calculeze suma termenilor pari dintr-un sir de numere pozitive
#include <iostream>

using namespace std;

int main()
{
    cout << "Numar = ";
    int x;
    int suma = 0;
    cin >> x;
    while (x > 0) {
        cout << "Numar = ";
        if (x%2 == 0) {
            suma = suma + x;
        }
        cin >> x;
    }
    cout << "Suma numerelor pare = " << suma;
    return 0;
}

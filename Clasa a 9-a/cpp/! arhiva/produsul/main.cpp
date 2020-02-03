/*
    Sa se calculeze produsul unui sir cu numar necunoscut de termeni strict pozitivi
*/
#include <iostream>

using namespace std;

int main()
{
    int nr;
    int produs = 1;
    cout << "Introduce un numar! Numar = ";
    cin >> nr;
    while (nr > 0) {
        produs = produs * nr;
        cout << "Mai introduce un numar! Numar = ";
        cin >> nr;
    }
    cout << "Produsul numerelor alese de tine este = " << produs << endl;
    return 0;
}

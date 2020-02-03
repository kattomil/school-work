/*
    Sa se calculeze suma unui sir cu numar necunoscut de termeni strict pozitivi
*/
#include <iostream>

using namespace std;

int main()
{
    int nr;
    int suma = 0;
    cout << "Introduce un numar! Numar = ";
    cin >> nr;
    while (nr > 0) {
        suma = suma + nr;
        cout << "Mai introduce un numar! Numar = ";
        cin >> nr;
    }
    cout << "Suma numerelor alese de tine este = " << suma << endl;
    return 0;
}

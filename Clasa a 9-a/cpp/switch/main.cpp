#include <iostream>

using namespace std;

int main()
{
    int x=0, y=0, optiune=9;
    do {
        cout << "Introduceti primul numar: ";
        cin >> x;
        cout << "Introduceti al doilea numar: ";
        cin >> y;
        cout << "/*****Meniu*****\\" << endl;
        cout << "Numerele introduse: " << x << ' ' << y << endl;
        cout << "1 - suma\n" << "2 - media\n" << "3 - media\n" << "0 - exit\n";
        cout << "/***************\\" << endl;
        cout << "Alegeti optiunea: ";
        cin >> optiune;
        switch(optiune) {
            case 1: cout << "Suma este " << x+y << endl;
                    break;
            case 2: cout << "Produsul este " << x*y << endl;
                    break;
            case 3: cout << "Media este " << (float)(x+y)/2 << endl;
                    break;
            case 0: cout << "Program oprit!" << endl;
                    break;
            default: cout << "Optiune invalida!" << endl;
                    break;
        }
    } while (optiune != 0);
    return 0;
}

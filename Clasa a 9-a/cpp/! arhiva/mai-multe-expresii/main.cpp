#include <iostream>
#include <string>

using namespace std;

int main()
{
    /* Se citesc de la tastatura 4 valori intregi a,b,c,d.
    Sa se calculeze valoarea expresiei:
    E = a + b, daca c < d;
    E = a * b, daca c = d';
    E = a*a+b*b, daca c > d;*/
    int a,b,c,d,E;
    string nume;
    cout << "Salut... umm..." << endl;
    cout << "Numele tau: ";
    cin >> nume;

    cout << endl << "Salutare " << nume << "! Acum trebuie sa urmezi niste pasi simpli ca sa aflii numarul E!" << endl << endl;
    cout << "E = a + b daca c < d" << endl << "E = a * b daca c = d" << endl << "E = a^2 + b^2 daca c > d" << endl;

    cout << endl << "Introduce o valoare pentru a!" << endl;
    cin >> a;

    cout << endl << "Acum introduce o valoare pentru b!" << endl;
    cin >> b;

    cout << endl << "Bravo " << nume << "! Acum trebuie sa introduci o valoare pentru c!" << endl;
    cin >> c;

    cout << endl << "Perfect! Acum mai trebuie doar sa introduci o valoare pentru d!" << endl;
    cin >> d;

    cout << endl;

    if (c < d) {
        E = a + b;
    } else if (c == d) {
        E = a * b;
    } else {
        E = a * a + b * b;
    }

    cout << nume << ", E = " << E << endl;
    return 0;
}

#include <iostream>

using namespace std;

int main()
{
    float a,b,x;
    // a , b , x - numere Reale
    cout << "Ecuatia de gradul I" << endl << endl;
    cout << "Numarul a = ";
    cin >> a;
    cout << "Numarul b = ";
    cin >> b;
    x = -b/a;
    if (a==0 || b==0) {
        cout << "Ecuatia nu are solutie !" << endl;
    }
    //Daca a sau b sunt 0, ecuatia nu are solutie
    if (a!=0 && b!=0) {
        cout << endl << "Rezultatul x = " << x << endl;
    }
    //Daca a si b sunt diferite de 0, arata rezultatul

    return 0;
}

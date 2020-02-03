#include <iostream>

using namespace std;

int main()
{
    int a,b;
    cout << "Introduce un numar: ";
    cin >> a;
    cout << "Mai introduce un numar: ";
    cin >> b;
    cout << "a = " << a << " si b = " << b << endl;
    cout << "Adunate: " << a+b << endl;
    cout << "Scazute: " << a-b << endl;
    cout << "Inmultite: " << a*b << endl;
    cout << "Impartite: " << a/b << "." << a%b << endl;
    return 0;
}

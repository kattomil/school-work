#include <iostream>

using namespace std;

int main()
{
    int n=0, contor=0, aux=0, aux2=0;
    cout << "n = ";
    cin >> n;
    aux = n;
    aux2 = n;
    while (n > 0)
    {
        contor = contor + 1;
        n = n / 10;
    }
    if (contor%2 == 0)
    {
        n = 0;
        int p = 1;
        cout << endl << "numar de cifre par !" << endl;
        for (int i=1; i <= contor; i++)
        {
            int cifra = aux % 10;
            aux = aux / 10;
            if (i != contor/2+1 && i != contor/2)
            {
                n = n + cifra * p;
                p = p*10;
            }
        }
        cout << endl << "numarul fara cele 2 cifre din mijloc: " << n << endl;
        n = 0;
        p = 1;
        for (int i=1; i <= contor; i++)
        {
            int cifra = aux2 % 10;
            aux2 = aux2 / 10;
            if (i != 1 && i != contor)
            {
                n = n + cifra * p;
                p = p*10;
            }
        }
        cout << endl << "numarul fara prima si ultima cifra: " << n << endl;
    }
    else if (contor%2 != 0)
    {
        cout << "numar de cifre impar !" << endl;
        n = 0;
        int p = 1;
        for (int i=1; i <= contor; i++)
        {
            int cifra = aux % 10;
            aux = aux / 10;
            if (i != contor/2+1)
            {
                n = n + cifra * p;
                p = p*10;
            }
        }
        cout << endl<< "numarul fara cifra din mijloc: " << n << endl;
        n = 0;
        p = 1;
        for (int i=1; i <= contor; i++)
        {
            int cifra = aux2 % 10;
            aux2 = aux2 / 10;
            if (i != 1 && i != contor)
            {
                n = n + cifra * p;
                p = p*10;
            }
        }
        cout << endl << "numarul fara prima si ultima cifra: " << n << endl;
    }
    return 0;
}

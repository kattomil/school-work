#include <iostream>

using namespace std;

int main()
{
    int n,contor,cifra;
    float media, suma;
    cout << "indroduceti o valoare pentru n ! n = ";
    cin >> n;
    suma=0;
    contor=0;
    do
    {
        cifra=n%10;
        suma=suma+cifra;
        contor=contor+1;
        n=n/10;
    } while (n>0);
    media=suma/contor;
    cout << "media cifrelor numarului tau este " << media << endl;
    return 0;
}

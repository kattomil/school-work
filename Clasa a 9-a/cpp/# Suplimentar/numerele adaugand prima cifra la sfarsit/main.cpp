#include <iostream>

using namespace std;

int main()
{
    int x=0, raspuns=1;
    cout << "x = ";
    cin >> x;

    int aux = x;
    int contor = 0;

    while (aux > 9)
    {
        aux/=10;
        contor = contor + 1;
    }

    int con = contor;
    int iwant = 1;

    while (con > 0)
    {
        iwant = 10*iwant;
        con = con - 1;
    }
    int y = x;
    do
    {
        raspuns = (y%iwant)*10+aux;
        cout << raspuns << endl;
        aux = raspuns;
        y = raspuns;
        while (aux > 9)
            aux/=10;
    } while (x != raspuns);
    return 0;
}

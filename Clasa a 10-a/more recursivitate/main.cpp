#include <iostream>

using namespace std;

int suma() {
    int x;
    cin >> x;
    if (x==0) return 0;
    else return suma()+x;
}

int contor() {
    int x;
    cin >> x;
    if (x==0) return 0;
    else return contor()+1;
}

int produs() {
    int x;
    cin >> x;
    if (x==0) return 1;
    ///pentru impare se schimba conditia din if cu (x%2!=0)
    else if (x%2==0) return produs()*x;
        else return produs();
}

int main()
{
    cout << produs();
    return 0;
}

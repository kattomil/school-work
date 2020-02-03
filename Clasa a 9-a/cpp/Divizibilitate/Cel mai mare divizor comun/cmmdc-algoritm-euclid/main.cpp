#include <iostream>

using namespace std;

int main()
{
    int a,b,r;
    cout << "Introduceti 2 valori pentru a si b\n";
    cin >> a >> b;
    r = a%b;
    while (r != 0) {
        a=b;
        b=r;
        r=a%b;
    }
    cout << "cmmdc = " << b;
    return 0;
}

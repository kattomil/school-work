#include <iostream>

using namespace std;

int main()
{
    int a,b,r,p;
    cout << "Introduceti 2 valori pentru a si b\n";
    cin >> a >> b;
    p=a*b;
    r = a%b;
    while (r != 0) {
        a=b;
        b=r;
        r=a%b;
    }
    cout << "cmmmc = " << p/b;
    return 0;
}

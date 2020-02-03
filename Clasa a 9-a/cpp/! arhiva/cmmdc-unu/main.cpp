#include <iostream>

using namespace std;

int main()
{
    int a,b;
    do {
        cout << "a = ";
        cin >> a;
    } while (a <= 0);

    do {
        cout << "b = ";
        cin >> b;
    } while (b <= 0);

    cout << endl;

    while (a != b) {
        if (a > b) {
            a = a - b;
        } else {
            b = b - a;
        }
    }
    cout << "cel mai mare divizor comun (cmmdc) = " << a;
    return 0;
}

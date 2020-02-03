#include <iostream>

using namespace std;

int main()
{
    int x;
    cout << "Scrie o valoare care sa i-o dai lui X!" << endl;
    cout << "int x = ";
    cin >> x;
    cout << endl;
    cout << "x = " << x << endl;
    cout << "x^2 = " << x * x << endl;
    cout << "x^3 = " << x * x * x << endl;
    cout << endl;
    x = 10;
    cout << "Program schimbat! x = 10" << endl;
    cout << "x^2 = " << x*x << endl;
    cout << "x^3 = " << x * x * x << endl;
    return 0;
}

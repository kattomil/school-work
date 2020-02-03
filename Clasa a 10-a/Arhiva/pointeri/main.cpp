#include <iostream>

using namespace std;

int main()
{
    int *p, x=4;
    p=&x;
    cout << x << " " << p << endl;
    x=10;
    cout << x << endl;
    *p=20;
    cout << x << endl;
    return 0;
}

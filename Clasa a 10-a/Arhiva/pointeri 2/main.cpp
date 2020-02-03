#include <iostream>

using namespace std;

int main()
{
    int x=4, y=5;
    int *p=&x;
    *p=10;
    cout << *p << " " << x << endl;
    p=&y;
    cout << *p << " " << y << endl;
    return 0;
}

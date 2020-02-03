#include <iostream>

using namespace std;

void f1(long n, int i) {
    if (n!=0)
        if (n%3>0) {
            cout << i;
            f1(n/3, i+1);
        }
}

void f2(long n) {
    cout << n%10;
    if (n!=0) {
        f2(n/100);
        cout << n%10;
    }
}

void f3(int x) {
    if (x>0)
        if (x%4==0) {
            cout << 'x';
            f3(x-1);
        } else {
            f3(x/3);
            cout << 'y';
        }
}

int main()
{
    f3(26);
    return 0;
}

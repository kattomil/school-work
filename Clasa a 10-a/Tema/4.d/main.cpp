#include <iostream>

using namespace std;

int main()
{
    int a,b;
    cin >> a;
    b=0;
    LOOP:while (a>0) {
        b+=a%10;
        a/=10;
    }
    if (b>=10) {
        a=b;
        b=0;
        goto LOOP;
    }
    cout << b;
    return 0;
}

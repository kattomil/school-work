#include <iostream>

using namespace std;

int main()
{
    int a,b;
    cin >> a;
    do {
        b=0;
        while (a!=0) {
            b+=a%10;
            a/=10;
        }
        a=b;
    } while (a>=10);
    cout << b;
    return 0;
}

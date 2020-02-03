#include <iostream>

using namespace std;

int Fibo(int n) {
    int a,b,c,d;
    a=b=1;
    c=d=2;
    if (n==1 || n==2) return 1;
    while (d!=n) {
        a=b;
        b=c;
        c=a+b;
        if (c%2==1) d++;
    }
    return c;
}

int main()
{
    int n;
    cin >> n;
    cout << Fibo(n);
    return 0;
}

#include <iostream>

using namespace std;

int main()
{
    int n=0, m=0, c=0;
    cin >> n;
    m = 0;
    do {
        c = n%10;
        n /= 10;
        if (c > 5) c/=2;
        m = m*10+c;
    } while (n > 0);
    cout << m;
    return 0;
}

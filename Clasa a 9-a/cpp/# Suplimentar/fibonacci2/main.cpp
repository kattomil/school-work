#include <iostream>

using namespace std;

int main()
{
    long long int a=1, b=2, c=0, n=0;
    cout << "n=";
    cin >> n;
    if (n==1) cout << "1";
    else if (n==2) cout << "1 1";
    else {
        cout << "1 1 ";
        for (int i=3; i<=n; ++i) {
            c=2*a+3*b;
            cout << c << " ";
            a=b;
            b=c;
        }
    }
    return 0;
}

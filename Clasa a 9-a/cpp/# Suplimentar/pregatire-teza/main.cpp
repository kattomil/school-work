#include <iostream>

using namespace std;

int main()
{
    int n=0, d=2, p=0;
    cout << "n = ";
    cin >> n;
    while (d<=n) {
        p=0;
        while (n%d == 0) {
            p+=1;
            n/=d;
        }
        if (p%2==0 && p!=0) {
            cout << d << " ";
        }
        d++;
    }
    cout << n;
    return 0;
}

#include <iostream>

using namespace std;

void divizor(int n, int &d) {
    d=2;
    int p=0, i=2;
    while (n>1) {
        while (n%i==0) {
            p++;
            n/=i;
        }
        if (p!=0) d=i;
        p=0;
        i++;
    }
}

int main()
{
    int n,d;
    cin >> n;
    divizor(n, d);
    cout << d;
    return 0;
}

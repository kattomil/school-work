#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n,d;
    long long suma;
    suma = 0;
    cin >> n;
        for (d=1; d*d<n; d++) {
            if (n%d==0) {
                suma=suma+d+n/d;
            }
        }
        if (d*d == n) {
            suma = suma + d;
        }
        cout << suma;
    return 0;
}

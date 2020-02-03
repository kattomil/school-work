#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int a[100001], n;
    cout << "Introduceti o valoare pentru n: ";
    cin >> n;
    for (int i=2; i<=n; ++i) a[i]=1;
    for (int i=2; i<=sqrt(n); ++i)
        if (a[i]==1)
            for (int j=2; j<=n/i; j++) a[i*j]=0;
    cout << "Numerele prime cuprinse in intervalul [1, " << n << "] sunt: ";
    for (int i=2; i<=n; ++i)
        if (a[i]==1) cout << i << " ";
    return 0;
}

#include <iostream>

using namespace std;

int main()
{
    int n=0, k=9, x=0;
    cout << "Cate numere vrei sa introduci? ";
    cin >> n;
    for (int i=1; i<=n; ++i) {
        cout << i << "| Numar: ";
        cin >> x;
        int c = (x/10)%10;
        if (c<k) k=c;
    }
    cout << "Rezultat: " << k;
    return 0;
}

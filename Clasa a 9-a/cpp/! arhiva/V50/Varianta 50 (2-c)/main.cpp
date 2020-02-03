#include <iostream>

using namespace std;

int main()
{
    int n=0, k=9, x=0, i=1;
    cout << "Cate numere vrei sa introduci? ";
    cin >> n;
    if (i <= n) {
        do {
            cout << i << "| Numar: ";
            cin >> x;
            int c = (x/10)%10;
            if (c<k) k=c;
            ++i;
        } while (i <= n);
    }
    cout << "Rezultat: " << k;
    return 0;
}

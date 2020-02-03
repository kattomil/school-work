#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n=0, x=0;
    cout << "Introduceti cate numere doriti sa introduceti: ";
    cin >> n;
    for (int i=1; i<=n; ++i) {
        cout << "(" << i << "/" << n << ") " << "Introduceti numarul: ";
        cin >> x;
        if (sqrt(x) == (int) sqrt(x)) cout << x << " este patrat perfect\n";
        else cout << x << " nu este patrat perfect\n";
    }
    return 0;
}

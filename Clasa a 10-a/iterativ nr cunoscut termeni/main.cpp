#include <iostream>

using namespace std;

void f(int n) {
    int x;
    if (n>0) {
        cin >> x;
        f(--n);
        cout << x << " ";
    }
}

int main()
{
    int n;
    cin >> n;
    f(n);
    return 0;
}

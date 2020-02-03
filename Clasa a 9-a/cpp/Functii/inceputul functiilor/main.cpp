#include <iostream>

using namespace std;

int prim(int a) {
    for (int i=2; i<=a/2; ++i)
        if (a%i==0)
            return 0;
    return 1;
}

int numar_prime(int n) {
    int x=0, k=0;
    for (int i=1; i<=n; ++i) {
        cout << "x = ";
        cin >> x;
        if (prim(x)==1) k++;
    }
    return k;
}

int main() {
    int n=0;
    cout << "n = ";
    cin >> n;
    cout << numar_prime(n);
    return 0;
}

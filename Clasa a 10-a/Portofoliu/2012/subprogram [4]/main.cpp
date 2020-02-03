#include <iostream>

using namespace std;

void zero(int n, int v[]) {
    int a=1, b=2, aux=0;
    while (a<=2*n || b<=2*n) {
        while (v[a]%2==1 && a%2==1 && a<=2*n) a+=2;
        while (v[b]%2==0 && b%2==0 && b<=2*n) b+=2;
        if (a<=2*n && b<=2*n && v[a]%2==0 && v[b]%2==1) swap(v[b], v[a]);
        a+=2;
        b+=2;
    }
}

int main()
{
    int n, v[1000];
    cin >> n;
    for (int i=1; i<=n*2; i++) cin >> v[i];
    zero(n, v);
    for (int i=1; i<=n*2; i++) cout << v[i] << " ";
    return 0;
}

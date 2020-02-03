#include <iostream>

using namespace std;

int sub(int n, int v[], int k) {
    int s=0;
    for (int i=1; i<=n; i++) {
        if (k==0) break;
        if (v[i]%2!=0) {
            k--;
            s+=v[i];
        }
    }
    if (s==0) return -1;
    else return s;
}

int main() {
    int n, v[10001], k;
    cin >> n;
    for (int i=1; i<=n; ++i) cin >> v[i];
    cin >> k;
    cout << sub(n,v,k);
    return 0;
}

#include <iostream>

using namespace std;

void valuri(int n, int * v) {
    for(int i=0 , j=1; i<2*n ; i+=2, j+=2)
        v[i]=j;
    for(int i=1 , j=2*n; i<2*n; i+=2, j-=2)
        v[i]=j;
    for (int i=0; i<2*n; ++i) cout << v[i] << " ";
 }

int main() {
    int n, v[10001];
    cin >> n;
    valuri(n,v);
    return 0;
}

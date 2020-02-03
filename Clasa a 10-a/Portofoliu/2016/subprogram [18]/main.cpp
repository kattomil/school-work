#include <iostream>

using namespace std;

int minDivPrim(int n) {
   int p=1;
   for (int i=2; i<=n; i++)
    while (n%i==0) {
        n/=i;
        if (p%i!=0) p*=i;
    }
    return p;
}

int main() {
   int n;
   cin >> n;
   cout << minDivPrim(n);
   return 0;
}

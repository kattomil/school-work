#include <iostream>

using namespace std;

int Cifre(int n) {
    int s=0, v[11];
    for (int i=0; i<=9; i++) v[i]=0;
    while (n > 0) {
	    v[n%10]++;
	    n/=10;
    }
    for (int i=0; i<=9; i++)
        if (v[i]==1) s++;
    return s;
}

int main() {
    int n;
    cin >> n;
    cout << Cifre(n);
    return 0;
}

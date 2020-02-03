#include <iostream>

using namespace std;

int cifreImpare(int n) {
    int s=0, aux=n, p=1;
    while (n>0) {
	    if (n%2==0) {
	        s=n%10*p+s;
	        p*=10;
	    }
	    n/=10;
    }
    if (s==0 || s==aux) return -1;
    else return s;
}

int main() {
    int n;
    cin >> n;
    cout << cifreImpare(n);
    return 0;
}

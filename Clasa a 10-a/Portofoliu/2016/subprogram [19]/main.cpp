#include <iostream>

using namespace std;

void duplicare(int n, int &d) {
    d = 0;
    int ok = 0, p = 1;
    while (n > 0) {
	    d=n%10*p+d;
	    p*=10;
	    if (n%2==0) {
	        ok++;
	        d=n%10*p+d;
	        p*=10;
	    }
	    n/=10;
    }
    if (!ok) d=-1;
}

int main() {
    int n,d;
    cin >> n;
    duplicare(n, d);
    cout << d;
    return 0;
}

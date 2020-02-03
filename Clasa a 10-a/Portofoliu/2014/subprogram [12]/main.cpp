#include <iostream>
using namespace std;

void triplete(int n) {
    int d;
    for (d=1; d<=n/2; d++)
	    if (n%d==0 && d<n/d)
	        for (int i=0; i<(n/d-d) && i<d; i++)
		        cout << "(" << i << "," << d << "," << n / d - i << ")" << endl;
}

int main()
{
    int n;
    cin >> n;
    triplete(n);
    return 0;
}

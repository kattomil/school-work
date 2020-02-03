#include <iostream>

using namespace std;

int DivImpar(int a, int b) {
    while (a%2==0) a/=2;
    while (b%2==0) b/=2;
    while (a!=b)
	    if (a>b) a-=b;
	    else b-=a;
    return a;
}

int main()
{
    int a, b;
    cin >> a >> b;
    cout << DivImpar(a, b);
    return 0;
}

#include <iostream>

using namespace std;

void interval(int n, int &a, int &b) {
    int p=1;
    for (int i=1; i<n; i++) p*=i;
    a=p+1;
    b=p*n*(n+1)-1;
}

int main()
{
    int n, a=0, b=0;
    cin >> n;
    interval(n, a, b);
    cout << a << " " << b;
    return 0;
}

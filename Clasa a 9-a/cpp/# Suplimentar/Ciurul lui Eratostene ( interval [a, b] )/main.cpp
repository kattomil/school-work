#include <iostream>
#include <cmath>

using namespace std;

int ciur(int a, int b) {
    int x[10001], k=0;
    for (int i=2; i<=b; ++i) x[i]=1;
    for (int i=2; i<=sqrt(b); ++i)
        if (x[i]==1)
            for (int j=2; j<=b/i; ++j)
                x[i*j]=0;
    for (int i=a; i<=b; ++i)
        if (x[i]==1) k++;
    return k;
}

int main()
{
    int a,b;
    cin >> a >> b;
    cout << ciur(a,b);
    return 0;
}

#include <iostream>

using namespace std;

int C[10000001];

int main()
{
    int n=0;
    cin >> n;
    for (int i=2; i<=n; ++i) C[i]=1;
    for (int i=2; i<=n; ++i)
        if (C[i]==1)
            for (int j=i+i; j<=n; j+=i)
                C[j]=0;
    for (int i=2; i<=n; ++i)
        if (C[i]==1) cout << i << " ";
    return 0;
}

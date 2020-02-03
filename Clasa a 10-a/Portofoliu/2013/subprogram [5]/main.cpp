#include <iostream>

using namespace std;

void num(int n, int v[]) {
    for (int i=1; i<n; ++i)
        if (v[i]<=v[0]) v[i]=0;
    v[0]=0;
}

int main()
{
    int n, v[100], c;
    cin>>n;
    for (int i=0; i<n; ++i) {cin>>c; v[i]=c;}
    num(n,v);
    for (int i=0; i<n; ++i) cout << v[i] << " ";
    return 0;
}

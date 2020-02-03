#include <iostream>

using namespace std;

void sub(int n, int v[], int x) {
    int a[100], b[100], p=0, o=0;
    for (int i=0; i<n; ++i)
        if (v[i]==x) {
            a[p]=v[i];
            p++;
        } else {
            b[o]=v[i];
            o++;
        }
    for (int i=0; i<p; ++i) v[i]=a[i];
    for (int i=p, j=0; i<n, j<o; ++i, ++j) v[i]=b[j];
}

int main()
{
    int n, v[100], c,x;
    cin>>n;
    for (int i=0; i<n; ++i) {cin>>c; v[i]=c;}
    cin>>x;
    sub(n,v,x);
    for (int i=0; i<n; ++i) cout << v[i] << " ";
    return 0;
}

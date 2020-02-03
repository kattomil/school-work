#include <iostream>

using namespace std;

void dublu(int & n, int a[]) {
    for (int i=0; i<n; ++i)
        if (a[i]>0) {
            for (int j=n; j>i+1; j--)
                a[j] = a[j-1];
            i++;
            a[i]=-a[i-1];
            n++;
        }
}

int main()
{
    int n, v[1000];
    cin >> n;
    for (int i=0; i<n; ++i) {
        int c;
        cin >> c;
        v[i]=c;
    }
    dublu(n,v);
    for (int i=0; i<n; ++i) cout << v[i] << " ";
    return 0;
}

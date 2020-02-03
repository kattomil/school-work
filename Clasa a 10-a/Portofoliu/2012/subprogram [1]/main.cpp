#include <iostream>

using namespace std;

void inserare(int & n, int a[]) {
    for (int i=0; i<n; ++i)
        if (a[i]%2==0) {
            for (int j=n; j>i; j--)
                a[j] = a[j-1];
            a[i]=a[i]/2;
            i++;
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
    inserare(n,v);
    for (int i=0; i<n; ++i) cout << v[i] << " ";
    return 0;
}

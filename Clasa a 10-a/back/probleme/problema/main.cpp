#include <iostream>

using namespace std;

int ns,n,x[100];

void afisare(int k) {
    for (int i=1; i<n; i++)
        cout << x[i];
    cout << endl;
    ns++;
}

int valid(int k) {
    for (int i=1; i<k; i++)
        if (x[i]==x[k]) return 0;
    if (k>1)
        if (x[k]%2!=0 && x[k-1]%2!=0) return 0;
    return 1;
}

int sol(int k) {
    if (k==n+1) return 1;
    return 0;
}

void b(int k) {
    if (sol(k)) afisare(k);
    else for (int i=1; i<=n; i++) {
        x[k]=i;
        if (valid(k)) b(k+1);
    }
}

int main()
{
    cin >> n;
    b(1);
    cout << ns;
    return 0;
}

#include <iostream>
#include <cmath>

using namespace std;

int n,v[100];

void afisare() {
    cout << endl;
    for (int i=1; i<=n; i++) {
        cout << endl;
        for (int j=1; j<=n; j++)
            if (v[i]==j) cout << "N ";
            else cout << "* ";
    }
}

int sol(int k) {return (k==n+1);}

int val(int k) {
    for (int i=1; i<k; i++)
        if (abs(v[k]-v[i])==k-i) return 0;
    return 1;
}

void b(int k) {
    if (sol(k)) afisare();
    else for (int i=1; i<=n; i++) {
        v[i]=k;
        if (val(k)) b(k+1);
    }
}

int main()
{
    n=4;
    b(1);
    return 0;
}

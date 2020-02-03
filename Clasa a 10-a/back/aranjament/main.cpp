#include <iostream>

using namespace std;

int n,m,ns,x[100];

void afis(int k) {
    for (int i=1; i<k; i++) cout << x[i];
    cout << endl;
    ns++;
}

int verif(int k) {
    for (int i=1; i<k; i++)
        if (x[i]==x[k]) return 0;
    return 1;
}

int sol(int k) {
    if (k==n+1) return 1;
    return 0;
}

void oof(int k) {
    if (sol(k)) afis(k);
    else for (int i=1; i<=m; i++) {
        x[k]=i;
        if (verif(k)) oof(k+1);
    }
}

int main()
{
    cin>>m>>n;
    oof(1);
    cout << ns;
    return 0;
}

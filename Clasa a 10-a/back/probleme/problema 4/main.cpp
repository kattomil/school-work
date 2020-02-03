#include <iostream>

using namespace std;

int n,k,v[100];
void afisare(int k);
bool sol(int k);
bool verif(int k);
void b(int k);

int main()
{
    cin >> n;
    b(1);
    return 0;
}

void afisare(int k) {
    for (int i=1; i<k; i++)
        if (v[i]==0) cout << "(";
        else cout << ")";
    cout << endl;
}

bool sol(int k) {
    if (k==n+1) return true;
    return false;
}

bool verif(int k) {
    int pi=0,pd=0;
    for (int i=1; i<=k; i++)
        if (v[i]==0) pi++;
        else pd++;
    if (pi>n/2 || pd>n/2 || pi<pd) return false;
    return true;
}

void b(int k) {
    if (sol(k)) afisare(k);
    else for(int i=0; i<=1; i++) {
        v[k]=i;
        if (verif(k)) b(k+1);
    }
}

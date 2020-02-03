#include <iostream>

using namespace std;

int c=3,p=2,k,v[100];
void afisare(int k);
bool sol(int k);
bool verif(int k);
void b(int k);

int main()
{
    cin >> c >> p;
    b(1);
    return 0;
}

void afisare(int k) {
    for (int i=1; i<k; i++)
        if (v[i]==0) cout << "C ";
        else cout << "P ";
    cout << endl;
}

bool sol(int k) {
    if (k==c+p+1) return true;
    return false;
}

bool verif(int k) {
    int cc=0,pp=0;
    for (int i=1; i<=k; i++)
        if (v[i]==0) cc++;
        else pp++;
    if (cc>c) return false;
    if (pp>p) return false;
    if (k>=3 && (v[k]==0 && v[k-1]==1 && v[k-2]==0)) return false;
    return true;
}

void b(int k) {
    if (sol(k)) afisare(k);
    else for(int i=0; i<=1; i++) {
        v[k]=i;
        if (verif(k)) b(k+1);
    }
}

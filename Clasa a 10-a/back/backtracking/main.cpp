#include <iostream>

using namespace std;

int v[100],n,m;

///cu functii ajutatoare
void afisare(int k) {
    cout << endl;
    for (int i=1; i<k; i++) cout << v[i] << " ";
}

int solutie(int k) {
    if (k==n+1) return 1;
    return 0;
}

int valid(int k) {
    if (v[k]%2!=0) ///orice conditie
        return 0;
    return 1;
}

void bk(int k) {
    if (solutie(k)==1) afisare(k);
    else for (int i=1; i<=m; i++) {
        v[k]=i;
        if (valid(k)==1) bk(k+1);
    }
}

///fara functii ajutatoare
void bt(int k) {
    if (k==n+1) {
        cout << endl;
        for (int i=1; i<k; i++) cout << v[i] << " ";
    } else for (int i=1; i<=m; i++) {
                v[k]=i;
                if (v[k]%2==0) bk(k+1);
            }
}

int main()
{
    int k=1;
    cin >> n >> m;
    bk(k);
    bt(k);
    return 0;
}

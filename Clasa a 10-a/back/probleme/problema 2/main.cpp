#include <iostream>
#include <cstring>

using namespace std;

int n,k,v[100],m;
char a[100][100]={"","agar","geranium","iasomie","paciuli","tuberoze"};

void afisare(int k) {
    for (int i=1; i<k; i++) {
        cout << a[v[i]];
        cout << " ";
    }
    cout << endl;
}

int solutie(int k) {
    if (k==n+1) return 1;
    return 0;
}

int valid(int k) {
    if (k>=2)
        if (v[k]<=v[k-1]) return 0;
    return 1;
}

void bt(int k) {
    if (solutie(k)) afisare(k);
    else for (int i=1; i<=m; i++) {
        v[k]=i;
        if (valid(k)) bt(k+1);
    }
}

int main()
{
    cin>>n>>m;
    bt(1);
    return 0;
}

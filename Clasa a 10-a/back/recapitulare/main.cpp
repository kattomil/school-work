#include <iostream>

using namespace std;

namespace prod {
int n=6,m=5,v[100],A[]={0,3,7,9,20,1},nrsol=0;

void afisare(int k) {
    cout << endl;
    for (int i=1; i<k; i++) cout << v[i] << " ";
    cout << endl;
    nrsol++;
}

int solutie(int k) {
    if (k==n+1) return 1;
    return 0;
}

void bk(int k) {
    if (solutie(k)==1) afisare(k);
    else for (int i=1; i<=m; i++) {
        v[k]=A[i];
        bk(k+1);
    }
}
}

namespace perm {
    int n=5,x[100],A[]={0,3,7,9,20,1},nrsol=0;

void afisare(int k) {
    for (int i=1; i<k; i++) cout << x[i] << " ";
    cout << endl;
    nrsol++;
};

int solutie(int k) {
    if (k==n+1) return 1;
    return 0;
};

int valid(int k) {
    for (int i=1; i<k; i++)
        if(x[i]==x[k]) return 0;
    return 1;
};

void bk(int k) {
    if (solutie(k)) afisare(k);
    else for (int i=1; i<=n; i++) {
        x[k]=A[i];
        if (valid(k)) bk(k+1);
    };
};
}

int main()
{
    prod::bk(1);
    cout << prod::nrsol;
    return 0;
}

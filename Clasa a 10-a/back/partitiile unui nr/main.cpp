#include <iostream>

using namespace std;

namespace p1 {
    int n=10,k,x[100],nrsol;

    void afisare(int k) {
        for (int i=1; i<k; i++)
            cout << x[i] << " ";
        cout << endl;
        nrsol++;
    }

    bool sol(int k) {
        int s=0;
        for (int i=1; i<k; i++) s+=x[i];
        if (s==n) return true;
        return false;
    }

    bool valid(int k) {
        int s=0;
        for (int i=1; i<=k; i++) s+=x[i];
        if (s<=n) return true;
        return false;
    }

    void b(int k) {
        if (sol(k)) afisare(k);
        else for (int i=1; i<=n; i++) {
            x[k]=i;
            if (valid(k)) b(k+1);
        }
    }
}

int main()
{
    p1::b(1);
    cout<<p1::nrsol;
    return 0;
}

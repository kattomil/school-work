#include <iostream>

using namespace std;

int n=5,k,x[100];

void afisare(int k) {
    for (int i=1; i<k; i++) cout << x[i] << " ";
    cout << endl;
}

void b(int k, int sa) {
    if (sa==n) afisare(k);
    else for (int i=x[k-1]; i<=n-sa; i++) {
        x[k]=i;
        b(k+1, sa+x[k]);
    }
}

int main()
{
    x[0]=1;
    b(1,0);
    return 0;
}

#include <iostream>
#include <cmath>

using namespace std;

int x[200], a[200]={0,3,2,9,7,1}, n=5, k, m;

void afisare(int k) {
    cout << "{ ";
    for (int i=1; i<k; i++)
        if (x[i]==1) cout << a[i] << " ";
    cout << '}';
    cout << endl;
    m++;
}

int sol(int k) {
    if (k==n+1) return 1;
    return 0;
}

void bk(int k) {
    if (sol(k)) afisare(k);
    else for (int j=0; j<=1; j++) {
                x[k]=j;
                bk(k+1);
        }
}

int main()
{
    bk(1);
    cout << m;
    return 0;
}

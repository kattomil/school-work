#include <iostream>

using namespace std;

int partitie(int v[], int s, int d) {
    int i=s, j=d, mod=1;
    while (i<j) {
        if (v[j]<v[i]) {
            swap(v[j], v[i]);
            mod=-mod;
        }
        if (mod==1) i++;
        else j--;
    }
    return j;
}

void qsort(int v[], int s, int d) {
    if (s<d) {
        int p=partitie(v,s,d);
        qsort(v, s, p-1);
        qsort(v, p+1, d);
    }
}

int main()
{
    int v[5] = {6,9,4,7,8}, n=5;
    qsort(v,0,n-1);
    for (int i=0; i<n; i++) cout << v[i] << " ";
    return 0;
}

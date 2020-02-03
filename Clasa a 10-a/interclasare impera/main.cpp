#include <iostream>

using namespace std;

void afisare(int v[], int n) {
    for (int i=0; i<n; i++) cout << v[i] << " ";
}

void interclasare(int v[], int s, int m, int d) {
    int i=s, j=m+1, k=0, c[100];
    while (i<=m && j<=d)
        if (v[i]<=v[j]) c[k++]=v[i++];
        else c[k++]=v[j++];
    while (i<=m) c[k++]=v[i++];
    while (j<=d) c[k++]=v[j++];
    for (int a=s, b=0; a<=d && b<=k; a++, b++)
        v[a]=c[b];
    afisare(v, d);
}

int main()
{
    int v[10]={0,1,5,7,2,6,7,10,20}, n=9;
    interclasare(v,0,n/2,n-1);
    return 0;
}

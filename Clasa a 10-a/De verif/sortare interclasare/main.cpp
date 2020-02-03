#include <iostream>

using namespace std;

void afisare(int v[], int n) {
    for (int i=0; i<n; i++)
        cout << v[i] << " ";
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
}

void sortInt(int v[], int s, int d) {
    if (s<d) {
        int m=(s+d)/2;
        sortInt(v,s,m);
        sortInt(v,m+1,d);
        interclasare(v,s,m,d);
    }
}

int main()
{
    int v[6]={7,34,765,3,754,6}, n=6;
    sortInt(v,0,n-1);
    afisare(v,n);
    return 0;
}

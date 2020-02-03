#include <iostream>
#include <fstream>

using namespace std;

///problema 1

int suma(int v[], int s, int d) {
    int suma=0;
    for (int i=s; i<=d; i++)
        if (v[i]%10!=0)
            suma+=v[i];
    return suma;
}

int sumaTimpera(int v[], int s, int d) {
    if (s<d) {
        int m=(s+d)/2;
        return suma(v,s,m)+suma(v,m+1,d);
    }
}

///problema 2

int partitie(int v[], int s, int d) {
    int i=s, j=d, mod=1;
    while (i<j) {
        if (v[j]<v[i]) {
            swap(v[i], v[j]);
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
        qsort(v,s,p-1);
        qsort(v,p+1,d);
    }
}

///problema 3

int exista(int v[], int s, int d, int div) {
    for (int i=s; i<=d; i++)
        if (v[i]==div) return 1;
    return 0;
}

int verificare(int v[], int s, int d, int div) {
    if (s<d) {
        int m=(s+d)/2;
        if (exista(v,s,m,div)==1 || exista(v,m+1,d,div)==1) return 1;
        else return 0;
    }
}

int main()
{
    ///declarare
    int n,d, v[10001];
    ifstream f("impera.in");

    ///citire
    f >> n >> d;
    for (int i=0; i<n; i++) f >> v[i];
    f.close();

    ///problema 1
    cout << sumaTimpera(v,0,n-1) << endl;

    ///problema 2
    qsort(v,0,n-1);
    for (int i=0; i<n; i++) cout << v[i] << " ";
    cout << endl;

    ///problema 3
    cout << verificare(v,0,n-1,d) << endl;

    return 0;
}

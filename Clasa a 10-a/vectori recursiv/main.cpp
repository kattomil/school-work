#include <iostream>

using namespace std;

///citire(v,n);
void citire(int v[], int n) {
    for (int i=0; i<n; i++) cin >> v[i];
}

///desc(v,n);
void desc(int v[], int n) {
    if (n>0) {
        cout << v[n-1] << " ";
        desc(v, n-1);
    }
}

///asc(v,n);
void asc(int v[], int n) {
    if (n>0) {
        asc(v, n-1);
        cout << v[n-1] << " ";
    }
}

///cout << suma(v,n);
int suma(int v[], int n) {
    if (n==0) return 0;
    return v[n-1]+suma(v, n-1);
}

///cout << produs(v,n);
int produs(int v[], int n) {
    if (n==0) return 1;
    return v[n-1]*produs(v, n-1);
}

///cout << maxim(v,n,-1);
int maxim(int v[], int n, int m) {
    if (n==0) return m;
    if (v[n-1]>m) m=v[n-1];
    return maxim(v,n-1,m);
}

///cout << minim(v,n,9999);
int minim(int v[], int n, int m) {
    if (n==0) return m;
    if (v[n-1]<m) m=v[n-1];
    return maxim(v,n-1,m);
}

///cout << maxim2(v,n);
int maxim2(int v[], int n) {
    int a;
    if (n==0) return -1;
    else {
        a=maxim2(v,n-1);
        if (v[n-1]>a) return v[n-1];
        else return a;
    }
}

///cout << minim2(v,n);
int minim2(int v[], int n) {
    int a;
    if (n==0) return 9999;
    else {
        a=minim2(v,n-1);
        if (v[n-1]<a) return v[n-1];
        else return a;
    }
}

///cout << verificare(v,n);
int verificare(int v[], int n) {
    if (n==0) return 0;
    else if (n%3==0) return 1;
    else return verificare(v, n-1);
}

int main()
{
    int v[200], n=5;
    citire(v, n);
    cout << maxim2(v, n);
    return 0;
}

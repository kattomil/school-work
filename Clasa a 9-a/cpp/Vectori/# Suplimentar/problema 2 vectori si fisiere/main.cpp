#include <iostream>
#include <fstream>

using namespace std;

void citire(int a[], int&na, int b[], int&nb);
void ordonare(int v[], int n);
void interclasare(int a[], int na, int b[], int nb);

int main()
{
    int a[10001], b[10001], na, nb;
    citire(a,na,b,nb);
    ordonare(a,na);
    ordonare(b,nb);
    interclasare(a,na,b,nb);
    return 0;
}

void citire(int a[], int&na, int b[], int&nb) {
    ifstream fin("vector.in");
    fin >> na;
    fin >> nb;
    for (int i=0; i<na; ++i) fin >> a[i];
    for (int i=0; i<nb; ++i) fin >> b[i];
    fin.close();
}

void ordonare(int v[], int n) {
    for (int i=0; i<n-1; ++i)
        for (int j=1+i; j<n; ++j)
            if (v[i] < v[j]) swap(v[i], v[j]);
}

void interclasare(int a[], int na, int b[], int nb) {
    int i=0, j=0;
    while (i<na && j<nb)
    if (a[i]>b[j]) cout << a[i++] << " ";
    else if (a[i]==b[j]) {cout << a[i++] << " "; j++;}
    else cout << b[j++] << " ";
    while (i<na) cout << a[i++] << " ";
    while (j<nb) cout << b[j++] << " ";
}

#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("vector.in");
ofstream fout("vector.out");
void inversareAfisare(int V[], int n);
void citireAfisare(int V[], int&n);
int main()
{
    int n, v[10001];
    citireAfisare(v,n);
    inversareAfisare(v, n);
    fin.close();
    fout.close();
    return 0;
}
void inversareAfisare(int V[], int n) {
    for (int i=0; i<n/2; ++i)
        swap(V[i], V[n-i-1]);
    for (int i=0; i<n; ++i)
        fout << V[i] << " ";
    fout << '\n';
}
void citireAfisare(int V[], int&n) {
    fin>>n;
    for (int i=0; i<n; ++i) fin >> V[i];
}

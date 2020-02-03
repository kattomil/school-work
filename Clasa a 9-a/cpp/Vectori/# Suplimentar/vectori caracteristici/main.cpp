#include <iostream>
#include <fstream>

using namespace std;

ifstream citeste("numere.in");
ofstream scrie("cifre.out");

int main()
{
    long long int v[10], n=0;
    for (int i=0; i<=9; i++) v[i]=0;
    citeste >> n;
    while (n!=0) {
        scrie << n << endl;
        while (n%10) {
            v[n%10]++;
            n/=10;
        }
        for (int i=0; i<=9; ++i)
            if (v[i]!=0)
                scrie << i << " " << v[i] << endl;
        scrie << endl;
        for (int i=0; i<=9; i++) v[i]=0;
    }
    citeste.close();
    scrie.close();
    return 0;
}

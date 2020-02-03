#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("numere.txt");
long long int v[10], vv[10];

int main()
{
    long long int x, i=0;
    while (fin >> x) {
        while (x!=0) {
            v[x%10]++;
            x/=10;
        }
    }
    cout << "Cifrele care nu apar in fisier: ";
    for (i=0; i<10; ++i)
        if (v[i]==0) cout << i << " ";
    return 0;
}

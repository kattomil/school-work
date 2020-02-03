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
    for (i=9; i>=0; --i)
        if (v[i]==1) cout << "Numarul " << i << " apare odata in fisier." << endl;
        else if (v[i]>1) cout << "Numarul " << i << " apare de " << v[i] << " ori in fisier." << endl;
    return 0;
}

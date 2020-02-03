#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("numere.txt");
long long int v[10];

int main()
{
    long long int x, i=0;
    while (fin >> x)
        if (x<=99 && x>=-99)
            v[x] = 1;
    for (i=0; i<100; ++i)
        if (v[i]==1) cout << i << " ";
    fin.close();
    return 0;
}

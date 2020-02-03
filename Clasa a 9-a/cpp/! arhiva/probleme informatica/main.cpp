#include <iostream>
#include <fstream>

using namespace std;

ofstream fout("bac.txt");

int main()
{
    for (int c1=1; c1<10; ++c1)
        for (int c2=0; c2<10; ++c2)
            fout << c1 << c1 << c2 << c2 << c2 << c2 << c1 << c1 << '\n';
    fout.close();
    return 0;
}

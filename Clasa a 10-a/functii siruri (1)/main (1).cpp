//functioneaza, nu am schimbat nimic
#include <iostream>
#include <string.h>
#include <fstream>

using namespace std;

ifstream f("poezie.txt");
char s[80];
int maxim = 0;

int main()
{
    while (f.getline(s, 80))
    {
        cout<<maxim<<' '<<strlen(s)<<endl;
        if (strlen(s) > maxim)
            maxim = strlen(s);
    }

    cout << maxim << " e versul de lungime maxima.";
    f.close();
    return 0;
}

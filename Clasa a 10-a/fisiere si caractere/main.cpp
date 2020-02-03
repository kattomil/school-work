#include <iostream>
#include <fstream>
#include <string.h>

using namespace std;

ifstream f;
int maxim;

int main()
{
    char s[2002], v[2002], vv[2002];

    maxim=0;
    f.open("poezie.txt");
    while (f.getline(s, 100))
        if (strlen(s) > maxim) {
            maxim=strlen(s);
            strcpy(v, s);
        }
    f.close();
    cout << v << endl;

    maxim=0;
    f.open("poezie.txt");
    while (f.getline(s, 100))
        if (strlen(s) >= maxim) {
            maxim=strlen(s);
            strcpy(vv, s);
        }
    f.close();
    cout << vv << endl;

    return 0;
}

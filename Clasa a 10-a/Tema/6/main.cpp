#include <iostream>
#include <string.h>
#include <fstream>
#include <stdlib.h>

using namespace std;

int main()
{
    ifstream f("sir.txt");
    int x,k;
    char a[5001], b[5001], c[5001];
    f >> x >> k;
    f.close();
    itoa(x, a, 10);
    itoa(x+1, b, 10);
    do {
        strcpy(c, b);
        strcat(c, a);
        strcpy(a, b);
        strcpy(b, c);
    } while (strlen(c)<k);
    cout << a;
    return 0;
}

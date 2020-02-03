#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    int x=0;
    char a[2001];
    cin.getline(a, 2000);
    for (int i=0; i<strlen(a); i++)
        if (a[i] >= '0' && a[i] <= '9') x=x*10+(a[i]-'0');
    cout << x;
    return 0;
}

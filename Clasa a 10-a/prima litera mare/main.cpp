#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    char n[2001];
    int i=0;
    cin.getline(n, 2000);
    if (n[i]>='a' && n[i]<='z')
        n[i]=toupper(n[i]);
    while(i<=strlen(n)) {
        if (n[i]==' ' && n[i+1]>='a' && n[i+1]<='z')
            n[i+1]=toupper(n[i+1]);
        i++;
    }
    cout << n;
    return 0;
}

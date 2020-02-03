#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char s[2001];
    cin >> s;
    int k=1, i=0;
    while (i<strlen(s)) {
        if (!strchr("bcdfghjklmnpqrstuvwxyz", s[i])) k=0;
        i++;
    }
    if (k==0) cout << "nu";
    else cout << "da";
    return 0;
}

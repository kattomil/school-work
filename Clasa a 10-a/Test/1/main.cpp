#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char s[2001];
    cin.getline(s, 2000);
    cout << strlen(s) << " ";
    int k=0, i=0;
    while (i<strlen(s)) {
        if (s[i]<'a' || s[i]>'z') k++;
        if (s[i]>='a' && s[i]<='z') s[i]=toupper(s[i]);
        i++;
    }
    cout << k << endl << s;
    return 0;
}

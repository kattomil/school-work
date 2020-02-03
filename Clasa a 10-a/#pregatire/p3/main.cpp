#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char s[20001];
    cin.getline(s, 20000);
    int i=1;
    while (i<strlen(s)) {
        if (strchr("aeiou", s[i]) && strchr("aeiou", s[i-1]))
            strcpy(s+i, s+i+1);
        else i++;
    }
    cout << s;
    return 0;
}

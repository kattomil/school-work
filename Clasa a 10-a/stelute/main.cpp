#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    char s[255], s1[255], a[255];
    cin.getline(s, 255);
    char *p=strtok(s, "*");
    strcpy(a, p);
    while (p) {
        if (strcmp(a,p)!=0) strcat(s1,p);
        strcat(s1,"*");
        p=strtok(NULL, "*");
    };
    strcpy(s,s1);
    cout << s;
    return 0;
}

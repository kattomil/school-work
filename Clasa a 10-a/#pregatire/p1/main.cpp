#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char s[100], *p, r[100]="";
    cin.getline(s, 100);
    p=strtok(s, " ");
    while (p) {
        if (strlen(p)%2!=0 && strlen(p)>=3) strcpy(p+strlen(p)/2, p+strlen(p)/2+1);
        strcat(r, p);
        strcat(r, " ");
        p=strtok(NULL, " ");
    }
    cout << r;
    return 0;
}

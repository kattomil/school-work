#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char s[100], *p, r[100]="";
    int i=0;
    cin.getline(s, 100);
    p=strtok(s, " ");
    while (p) {
        if (p[0]>='A' && p[0]<='Z') {
            r[i]=p[0];
            i++;
        }
        p=strtok(NULL, " ");
    }
    cout << r;
    return 0;
}

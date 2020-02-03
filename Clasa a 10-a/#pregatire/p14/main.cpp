#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char s[100], r[100]="", *p;
    cin.getline(s, 100);
    p=strtok(s, " ");
    while (p) {
        if (strlen(p)%2==0) strcat(r, "# ");
        else {
        strcat(r, p);
        strcat(r, " ");
        };
        p=strtok(NULL, " ");
    }
    cout << r;
    return 0;
}

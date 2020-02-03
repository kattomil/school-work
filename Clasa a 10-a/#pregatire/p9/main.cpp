#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char s[70], *p;
    int r=0;
    cin.getline(s, 70);
    p=strtok(s, " ");
    while (p) {
        int i=0;
        while (i<strlen(p)) {
            if (p[i]=='a') {
                r++;
                break;
            }
            i++;
        }
        p=strtok(NULL, " ");
    }
    cout << r;
    return 0;
}

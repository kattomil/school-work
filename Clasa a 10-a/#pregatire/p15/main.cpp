#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char s[100], *p;
    cin.getline(s, 100);
    p=strtok(s, " ");
    while (p) {
        int i=0, k=0;
        while (i<strlen(p)) {
            if (p[i]=='R' && p[i+1]=='E')  k=1;
            else if (p[i]=='M' && p[i+1]=='I') k=1;
            else if (p[i]=='F' && p[i+1]=='A') k=1;
            else if (p[i]=='S' && p[i+1]=='O' && p[i+2]=='L') k=1;
            else if (p[i]=='L' && p[i+1]=='A') k=1;
            else if (p[i]=='S' && p[i+1]=='I') k=1;
            i++;
        }
        if (k==1) cout << p << endl;
        p=strtok(NULL, " ");
    }
    return 0;
}

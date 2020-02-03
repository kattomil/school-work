#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    int n,k;
    cin >> n;
    cin.get();
    char s[n][201], a[2001]="", b[2001]="";
    for (int i=0; i<n; i++) cin >> s[i];
    cin >> k;
    for (int i=0; i<n; i++)
        if (strlen(s[i])==k) {
            strcat(a, s[i]);
            strcat(a, " ");
        } else {
            strcat(b, s[i]);
            strcat(b, " ");
        }
    strcat(a, b);
    cout << a;
    return 0;
}

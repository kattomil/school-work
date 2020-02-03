#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    int n, r=0;
    cin >> n;
    cin.get();
    char s[n][20], a[20];
    cin.getline(a, 20);
    for (int i=1; i<n; i++) cin.getline(s[i], 20);
    for (int i=1; i<n; i++)
        if (strcmp(s[i]+(strlen(s[i])-strlen(a)), a)==0) {
            cout << s[i] << " ";
            r++;
        }
    cout << r;
    return 0;
}

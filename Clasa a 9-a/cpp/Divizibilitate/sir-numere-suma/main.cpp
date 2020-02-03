#include <iostream>

using namespace std;

int main()
{
    int n,x,s=0;
    cout << "n = ";
    cin >> n;
    for (int i=0; i<n; i++) {
        cout << "x = ";
        cin >> x;
        s = s + x;
    }
    cout << "Suma numerelor este " << s;
    return 0;
}

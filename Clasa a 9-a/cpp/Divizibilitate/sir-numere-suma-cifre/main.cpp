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
        s = 0;
        while (x != 0) {
            int cifra = x%10;
            s = s + cifra;
            x = x/10;
        }
        cout << "Suma cifrelor este " << s << endl;
    }
    return 0;
}

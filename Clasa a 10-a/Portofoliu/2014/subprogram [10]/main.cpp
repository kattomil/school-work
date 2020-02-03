#include <iostream>

using namespace std;

void perfect(int a, int b) {
    if (a>b) swap(a, b);
    int ok=0;
    for (int i=b; i>=a; i--) {
        int s=1;
        for (int j=2; j<=i/2; j++)
            if (i%j==0) s+=j;
        if (s==i) {
            cout << i << " ";
            ok=1;
        }
    }
    if (ok==0) cout << "Nu exista.";
}

int main()
{
    int a, b;
    cin >> a >> b;
    perfect(a, b);
    return 0;
}

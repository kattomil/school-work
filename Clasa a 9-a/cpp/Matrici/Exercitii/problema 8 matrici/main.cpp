#include <iostream>

using namespace std;

int main()
{
    int a[6][6];
    for (int i=1; i<=5; ++i)
        for (int j=1; j<=5; ++j)
            a[i][j] = (i+j)%5;

    for (int i=1; i<=5; ++i) {
        for (int j=1; j<=5; ++j)
            cout << a[i][j] << " ";
    cout << endl;
    }
    return 0;
}

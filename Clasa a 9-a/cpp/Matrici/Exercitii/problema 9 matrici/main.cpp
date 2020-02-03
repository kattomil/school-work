#include <iostream>

using namespace std;

/** 2*i + 1
3 4 5 6 7
5 6 7 8 9
7 8 9 10 11
9 10 11 12 13
11 12 13 14 15
*/

int main()
{
    int a[6][6];
    for (int i=1; i<=5; ++i)
        for (int j=1; j<=5; ++j)
            a[i][j] = 2*i+j;

    for (int i=1; i<=5; ++i) {
        for (int j=1; j<=5; ++j)
            cout << a[i][j] << " ";
    cout << endl;
    }
    return 0;
}

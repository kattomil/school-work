#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int m[n][n];

    for (int i=0; i<n; i++)
        for (int j=0; j<n; j++)
            cin >> m[i][j];

    for (int i=0; i<n; i++)
        for (int j=0; j<n; j++)
            if (m[i][j] < m[i][j+1] && m[i][j] < m[i][j-1])
                if (m[i][j] < m[i+1][j] && m[i][j] < m[i-1][j])
                    cout << m[i][j] << " ";
    return 0;
}

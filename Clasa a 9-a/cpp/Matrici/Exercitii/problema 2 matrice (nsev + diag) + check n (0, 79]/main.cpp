#include <iostream>

using namespace std;

void completare(int a[100][100], int & n);
void afisare(int a[100][100], int n);

int main()
{
    int a[100][100], n;
    completare(a,n);
    afisare(a,n);
    return 0;
}

void completare(int a[100][100], int & n) {
    do {
    cout << "n = ";
    cin >> n;
    if (n<0 || n>79) cout << "Numar incorect. n = (0, 79]\n";
    } while (n<0 || n>79);
    for (int i=0; i<n; ++i)
        for (int j=0; j<n; ++j)
            if (i==j) a[i][j] = 0;
            else if (i+j==n-1) a[i][j] = 1;
            else if (i<j && i+j<n-1) a[i][j] = 2;
            else if (i>j && i+j>n-1) a[i][j] = 3;
            else if (i<j && i+j>n-1) a[i][j] = 4;
            else if (i>j && i+j<n-1) a[i][j] = 5;
}

void afisare(int a[100][100], int n) {
    cout << endl;
    for (int i=0; i<n; ++i) {
        for (int j=0; j<n; ++j)
            cout << a[i][j];
    cout << endl;
    }
}

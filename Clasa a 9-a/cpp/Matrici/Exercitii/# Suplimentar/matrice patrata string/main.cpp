#include <iostream>
#include <string>

using namespace std;

void completare(string a[10][10], int & n);
void afisare(string a[10][10], int n);

int main()
{
    string a[10][10];
    int n;
    completare(a,n);
    afisare(a,n);
    return 0;
}

void completare(string a[10][10], int & n) {
    cout << "n = ";
    cin >> n;
    for (int i=0; i<n; ++i)
        for (int j=0; j<n; ++j)
            if (i==j) a[i][j] = "*";
            else if (i<j) a[i][j] = "?";
            else a[i][j] = "!";
}

void afisare(string a[10][10], int n) {
    for (int i=0; i<n; ++i) {
        for (int j=0; j<n; ++j)
            cout << a[i][j];
    cout << endl;
    }
}

#include <iostream>

using namespace std;

void vector(int n) {
    int V[n];
    for (int i=0; i<n; ++i) {
        cout << "V[" << i << "] = ";
        cin >> V[i];
    }
    for (int i=0; i<n; ++i) cout << "\n" << V[i];
}

int main()
{
    int n=0;
    cout << "n = ";
    cin >> n;
    vector(n);
    return 0;
}

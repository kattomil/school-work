#include <iostream>

using namespace std;

int main()
{
    int v[10001], n=0;
    cout << "n = ";
    cin >> n;
    for (int i=0; i<n; ++i) {
        cout << "v[" << i << "] = ";
        cin >> v[i];
    }
    for (int i=0; i<n; ++i) cout << v[i] << " ";
    cout << endl << endl;
    for (int i=0; i<n-1; ++i)
        for (int j=i+1; j<n; ++j)
            if (v[i] > v[j] && v[i]%2==0 && v[j]%2==0)
                swap(v[i], v[j]);
    for (int i=0; i<n; ++i) cout << v[i] << " ";
    cout << endl;
    return 0;
}

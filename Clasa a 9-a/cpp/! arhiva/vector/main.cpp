#include <iostream>

using namespace std;

int main()
{
    int n = 0;
    cout << "Cate numere vrei sa introduci? ";
    cin >> n;
    int vector[n];
    for (int i=0; i<n; i++)
    {
        cout << "vector[" << i << "] = ";
        cin >> vector[i];
    }
    cout << endl << "Numerele alese de tine sunt ";
    for (int i=0; i<n; i++)
    {
        cout << vector[i] << ", ";
    }
    cout << endl << "Numerele alese de tine dar in ordine inversa sunt ";
    for (int i=n-1; i>=0; i=i-1)
    {
        cout << vector[i] << ", ";
    }
    return 69;
}

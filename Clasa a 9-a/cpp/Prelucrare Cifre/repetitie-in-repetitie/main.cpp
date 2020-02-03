#include <iostream>

using namespace std;

int main()
{
    int n=0, contor=0;
    cout << "n = ";
    cin >> n;
    cout << endl;
    for (int i=1; i <= n; i++)
    {
        for (int j=1; j <= n; j++)
        {
            if (i==j || i+j==n+1)
            {
                cout << "#";
                contor = contor + 1;
            }
            else
            {
                cout << j;
            }
        }
    }
    cout << endl << "nr de #: " << contor;
    return 0;
}

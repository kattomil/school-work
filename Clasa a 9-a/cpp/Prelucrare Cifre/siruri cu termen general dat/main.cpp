#include <iostream>

using namespace std;

int main()
{
    int n=0, i=1;
    float s=0;
    cout << "n = ";
    cin >> n;
    for (i; i<=n; ++i) s+=(float) (i*(i+1))/(i+2);
    cout << s;
    return 0;
}

#include <iostream>

using namespace std;

int main()
{
    int n=0,p=0,m=0,c1=0,c2=0;
    cout << "n=";
    cin >> n;
    m = 0;
    p = 1;
    while (n>=10)
    {
        c1 = n%10;
        n = n/10;
        c2 = n%10;
        if (c1 != c2)
        {
            if (c1 > c2)
            {
                m = m + (c1-c2) * p;
            }
            else
            {
                m = m + (c2-c1) * p;
            }
            p = p * 10;
        }
    }
    cout << m;
    return 0;
}

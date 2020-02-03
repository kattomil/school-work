#include <iostream>

using namespace std;

int divizor(int a, int b, int c) {
    int s=0;
    for (int i=min(a,min(b,c)),j=1; j<=i; j++)
        if (a%j==0 && b%j==0 && c%j==0) s++;
    return s;
}

int main()
{
    int a,b,c;
    cin >> a >> b >> c;
    cout << divizor(a,b,c);
    return 0;
}

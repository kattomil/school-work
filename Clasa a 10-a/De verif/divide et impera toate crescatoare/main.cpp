#include <iostream>

using namespace std;

int f(int v[], int s, int d) {
    if (v[s]>v[d]) return 0;
    else if (s==d) return 1;
    else {
        int m=(s+d)/2;
        int a=f(v,s,m);
        int b=f(v,m+1,d);
        return (a+b)/2;
    }
}

int main()
{
    int v[5]={1,2,7,4,5}, n=5;
    cout << f(v,0,n-1);
    return 0;
}

#include <iostream>

using namespace std;

int pare(int n) {
    for (int i=2; i<=n/2; i++)
        if (n%i==0) return 0;
    return 1;
}

int f(int v[], int s, int d) {
    if (pare(v[s])==1 || pare(v[d])==1) return 1;
    else if (s==d) return 0;
    else {
        int m=(s+d)/2;
        int a=f(v,s,m);
        int b=f(v,m+1,d);
        return (a+b)/2;
    }
}

int main()
{
    int v[5]={12,4,6,8,10}, n=5;
    cout << f(v,0,n-1);
    return 0;
}

#include <iostream>

using namespace std;

int cmmdc(int a, int b) {
    int r=a%b;
    while (r) {
        a=b;
        b=r;
        r=a%b;
    }
    return b;
}

int cmmdcDE(int v[], int s, int d) {
    if (s==d) return v[s];
    else {
        int m=(s+d)/2;
        int r1=cmmdcDE(v, s, m);
        int r2=cmmdcDE(v, m+1, d);
        return cmmdc(r1,r2);
    }
}

int main()
{
    int v[5]={2,4,6,8,10}, n=5;
    cout << cmmdcDE(v,0,n-1) << endl;
    return 0;
}

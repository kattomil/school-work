#include <iostream>

using namespace std;

int iterativ_suma(int v[], int n) {
    int s=0;
    for (int i=0; i<n; i++) s+=v[i];
    return s;
}

int recursiv_suma(int v[], int n) {
    if (n==0) return 0;
    else return recursiv_suma(v, n-1)+v[n-1];
}

int impera_suma(int v[], int s, int d) { ///s=0 && d=n-1
    int m,a,b;
    if (s==d) return v[s];
    else {
        m=(s+d)/2;
        a=impera_suma(v,s,m);
        b=impera_suma(v,m+1,d);
        return a+b;
    }
}

int main()
{
    int v[5]={1,2,3,4,5}, n=5;
    cout << iterativ_suma(v,n) << endl;
    cout << recursiv_suma(v,n) << endl;
    cout << impera_suma(v,0,n-1) << endl;
}

#include <iostream>
#include <fstream>

using namespace std;

char C[10000001];

ifstream in("interval.in");
ofstream out("interval.out");

void ciur() {
    int N=10000000, I, J;
    for(I=1;I<=N; I++) C[I] =1;
    for (I=2;I<=N;I++)
        if(C[I] == 1)
            for(J=2;J*I <= N;J ++)
                C[I*J] = 0;
}

int main()
{
    int a,b,amax,bmax,pmax=0,nrp,x,n,i,a1,b1;
    ciur();
    cin >> n >> a;
    for(i=2;i<=n;i++) {
        cin>>b;
        a1=a;
        b1=b;
        if(a>b) x=a;a=b;b=x;
        if(a%2==0) x=a+1;
        else x=a;
        nrp=0;
        for(;x<=b;x+=2) if(C[x]) nrp++;
        if(nrp>pmax) pmax=nrp;
        a=b1;
    }
    cout<<pmax<<endl;
    return 0;
}

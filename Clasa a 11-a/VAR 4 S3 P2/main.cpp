#include <iostream>

using namespace std;
int func(int a, int b, int n, int m[][5]) {
    for(int x=2;x<n;x++)
        for(int i=a;i<=x;i++)
            for(int j=b;j<=x;j++)
                if(m[i][j]!=m[a][b]) return (x-1);
}
int main()
{
    int m[5][5] = {2,2,2,2,2,
                   2,2,2,2,8,
                   2,2,2,2,2,
                   2,1,2,8,7,
                   3,5,2,1,2 }, n=5, ma=-1;
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            ma=max(ma, func(i,j,n,m));
    cout<<ma;
    return 0;
}

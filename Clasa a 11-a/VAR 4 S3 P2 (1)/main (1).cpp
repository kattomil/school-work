#include <iostream>

using namespace std;
int func(int a, int b, int n, int m[][5]) {
    for(int x=1;x<=n-min(a,b);x++)
    {
        for(int i=a;i<=a+x;i++)
            if(m[i][b+x]!=m[a][b])
                return (x);
        for(int j=b;j<=b+x;j++)
                if(m[a+x][j]!=m[a][b])
                    return (x);
    }

}
int main()
{
    int m[5][5] = {2,2,2,2,2,
                   2,1,2,2,8,
                   2,2,2,2,2,
                   2,2,2,2,2,
                   3,5,2,2,2 }, n=5, ma=1;
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            ma=max(ma, func(i,j,n,m));
    cout<<ma;
    return 0;
}

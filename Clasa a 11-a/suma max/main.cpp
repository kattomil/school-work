#include <iostream>

using namespace std;

int a[100],b[100],n,m,sum;

void greedy() {
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    for(int i=1;i<=n;i++)
        if(a[i]>=0) {
            b[m+1]=a[i];
            m++;
        }
    for(int i=1;i<=m;i++)sum+=b[i];
    cout<<sum;
}

int main()
{
    greedy();
    return 0;
}

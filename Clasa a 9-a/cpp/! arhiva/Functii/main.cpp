#include <iostream>

using namespace std;

 int multiplu(int a[100],int n,int k)
 { int i,OK=0;

    cout<<"k= ";cin>>k;
    for(i=1;i<=n;i++)
    {
      if(a[i]%k==0 && a[i]%10==k)
        OK++;
    }
    return OK;
 }


int main()
{ int a[100],n,k,i;

cout<<"nr termeni: ";cin>>n;

for(i=1;i<=n;i++)
{
    cout<<"a["<<i<<"]= ";
    cin>>a[i];
}

for(i=1;i<=n;i++)
{
    cout<<multiplu(a,n,k)<<" ";
}


    return 0;
}

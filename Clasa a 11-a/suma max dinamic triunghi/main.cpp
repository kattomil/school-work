#include <iostream>

using namespace std;
int n,a[100][100];
void afisare() {
    for(int i=1;i<=n;i++) {
        for(int j=1;j<=n;j++)
            cout<<a[i][j]<<" ";
        cout<<endl;
    }
}
/// 4 2 3 5 6 3 4 5 6 1 4
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
        if(i>=j) {
            cin>>a[i][j];
        }
    for(int i=n-1;i>=1;i--)
        for(int j=n-1;j>=1;j--)
            if(a[i][j])
                a[i][j]+=max(a[i+1][j],a[i+1][j+1]);
    afisare();
    return 0;
}

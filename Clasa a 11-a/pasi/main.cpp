#include <iostream>

using namespace std;

int main()
{
    cout<<"Numar de trepte: ";int n,a=1,b=1,c=1;cin>>n;
    for(int i=3;i<=n;i++) {c=a+b;a=b;b=c;}
    cout<<"Numar de posibilitati de urcarea treptelor: "<<a+b<<endl;
    return 0;
}

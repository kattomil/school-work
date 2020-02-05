#include <iostream>
#include <fstream>

using namespace std;
ifstream f;
int n,t[999];
void citire() {
    f.open("data.txt");
    f>>n;
    for(int i=1;i<=n;i++)
        f>>t[i];
    f.close();
}
void taiere() {
    for(int i=2;i<=n;i++)
        if(t[i]>=t[i-1])
            t[i]=t[i]-(t[i]-t[i-1]+1);
}
int main() {
    citire();
    taiere();
    for(int i=1;i<=n;i++)cout<<t[i]<<" ";
    return 0;
}

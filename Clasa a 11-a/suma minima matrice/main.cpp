#include <iostream>
#include <fstream>
#include <algorithm>

using namespace std;

ifstream f;
int n,a[1000][1000],sum;

void citire() {
    f.open("data.txt");
    f>>n;
    for(int i=1;i<=n;i++)for(int j=1;j<=n;j++)f>>a[i][j];
    f.close();
}
void afisare() {
    for(int i=1;i<=n;i++) {
        for(int j=1;j<=n;j++)
            cout<<a[i][j]<<" ";
        cout<<endl;
    }
    cout<<endl;
}
void Sort() {
    for(int i=1;i<=n;i++)
        sort(a[i]+1,a[i]+n+1);
}
void greedy() {
    Sort();
    for(int i=1;i<=n;i++)sum+=a[i][1];
    cout<<sum;
}
int main()
{
    citire();
    greedy();
    return 0;
}

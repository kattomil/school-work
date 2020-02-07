#include <iostream>
#include <fstream>
using namespace std;
int n, a[100][100],sol[100];
ifstream f;
void citire() {
    f.open("data.txt");
    f>>n;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
            f>>a[i][j];
    f.close();
};
void greedy() {
    sol[1]=1;
    for(int i=2;i<=n;i++) {
        sol[i]=1;
        for(int j=1;j<=n;j++)
            if(a[i][j])
                if(sol[i]==sol[j])sol[i]++;
    }
}
int main() {
    citire();
    greedy();
    for(int i=1;i<=n;i++)cout<<"Tara " << i << " ia culoarea "<<sol[i]<<"\n";
    return 0;
}

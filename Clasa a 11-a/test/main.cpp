#include <iostream>
#include <fstream>

using namespace std;

int n,X,a[100][100];
void greedy() {
    ifstream f("personal.in");
    f>>n>>X;
    for(int i=1;i<n;i++)
        f>>a[i][i+1];
    f.close();
    ofstream g("accelerat.out");
    g<<"Trenul trece prin statiile: "<<endl;
    for(int i=1;i<n-1;i++)
        if(a[i][i+1]>=X)
            g<<i<<" - "<<i+1<<"("<<a[i][i+1]<<"km)"<<endl;
    g<<n-1<<" - "<<n<<"("<<a[n-1][n]<<"km)"<<endl;
    g.close();
}

int main() {
    greedy();
    return 0;
}

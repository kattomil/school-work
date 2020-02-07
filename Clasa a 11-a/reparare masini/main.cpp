#include <iostream>
#include <fstream>
#include <algorithm>

using namespace std;

ifstream f;
int v[1000],n=1,T,t,m;

void greedy() {
    f.open("data.txt");f>>T; while(f>>v[n])n++; f.close(); n--;
    sort(v+1,v+n+1);
    for(int i=1;i<=n;i++)
        if(t+v[i]<=T) {
            m++;
            t+=v[i];
        } else break;
    cout<<"Numar de masini: "<<m<<"\nIn "<<t<<" minute.";
}

int main() {
    greedy();
    return 0;
}

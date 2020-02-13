#include <cmath>
#include <fstream>
#include <algorithm>
#include <iostream>

using namespace std;

int s,n,e,a[1000];

void greedy() {
    ifstream f("eur.in");f>>s>>n>>e;f.close();
    for(int i=n,j=0;i>=0;i--,j++)
        a[j]=pow(e,i);
    int val=0,j=0;
    ofstream g("eur.out");
    for(int i=0;i<=n;i++) {
        int banc=0;
        while(val+a[i]<=s) {
            val+=a[i];
            banc++;
        }
        if(banc) {
            g<<banc<<" bancnote de valoarea "<<a[i]<<endl;
            j+=banc;
        }
    }
    g<<j;g.close();
}

int main()
{
    greedy();
    return 0;
}

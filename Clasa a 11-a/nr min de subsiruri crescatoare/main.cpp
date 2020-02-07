#include <iostream>
#include <fstream>

using namespace std;

ifstream f;
int n,v[1000],lenmin;

void citire() {
    f.open("data.txt");
    f>>n;
    lenmin=n;
    for(int i=1;i<=n;i++)f>>v[i];
    f.close();
}

void greedy() {
    int len=0;
    for(int i=1;i<=n;i++) {
        if(v[i+1]>v[i]) {
            len++;
        } else {
            len++;
            if(len>1)
                lenmin=min(len,lenmin);
            len=0;
        }
    }
    cout<<lenmin;
}

int main()
{
    citire();
    greedy();
    return 0;
}

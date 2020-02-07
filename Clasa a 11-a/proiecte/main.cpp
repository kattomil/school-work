#include <iostream>
#include <fstream>
#include <algorithm>

using namespace std;

ifstream f;
int n,v[1000];

void greedy() {
    f.open("data.txt");f>>n;for(int i=1;i<=n;i++)f>>v[i];f.close();
        cout<<"Ordinea Originala: ";for(int i=1;i<=n;i++)cout<<v[i]<<" ";
    cout<<endl;
    sort(v+1, v+n+1);
        cout<<"Ordinea Minimizata: ";for(int i=1;i<=n;i++)cout<<v[i]<<" ";
}

int main()
{
    greedy();
    return 0;
}

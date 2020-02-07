#include <iostream>
#include <fstream>

using namespace std;

ifstream f;
int n,a[10001],s;

void citire() {
    f.open("data.txt");
    f>>n;
    for(int i=1;i<=n;i++) f>>a[i];
    f.close();
}

void greedy() {
    cout<<"Subsecventele: ";
    for(int i=1;i<=n;i++) {
        s=a[i];
        if(s%n==0){
            cout<<a[i]<<" & "<<a[i];
            return;
        }
        for(int j=i+1;j<n;j++) {
            s+=a[j]%n;
            if(s%n==0) {
                cout<<a[i]<<" & "<<a[j];
                return;
            }
        }
    }
}

int main() {
    citire();
    greedy();
    return 0;
}


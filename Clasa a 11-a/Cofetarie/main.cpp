#include <iostream>
#include <fstream>
#include <algorithm>
using namespace std;
ifstream f;
int n,medie;
struct str{int b,nr;} v[100];
double media;
void citire() {
    f.open("data.txt");
    f>>n;
    for(int i=1;i<=n;i++) {
        f>>v[i].b;
        v[i].nr=i;
        media+=(double)v[i].b;
    }
    media/=n;
    medie=(int)media;
    f.close();
}
bool ordine(str x, str y) {
    return x.b<y.b;
}
void greedy() {
    sort(v+1, v+n+1, ordine);
    for(int i=1,j=n;i<=n;i++) {
            if(v[j].b>medie) {
                if(v[i].b<medie) {
                    int x=medie-v[i].b;
                    if(v[j].b-x<medie) {
                        int k=0;
                        for(k=1;k<x;k++)
                            if(v[j].b-(k+1)<(int)medie) break;
                        v[i].b+=k;
                        v[j].b-=k;
                        cout<<"Din cutia " << v[j].nr << " punem in cutia "<<v[i].nr<<" "<<k<<" bomboane"<<endl;
                            j--;
                            i--;
                    } else {
                        v[i].b+=x;
                        v[j].b-=x;
                        cout<<"Din cutia " << v[j].nr << " punem in cutia "<<v[i].nr<<" "<<x<<" bomboane"<<endl;
                    }
                }
            }
    }
}
int main() {
    citire();
    if(media==medie) {
        greedy();
    } else cout << "nu are solutie";
    return 0;
}

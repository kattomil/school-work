#include <iostream>
#include <fstream>
#include <algorithm>

using namespace std;
ifstream f;
ofstream g;
int n,m=1,G;
struct t { int g,c; float p;} h[100], sol[100];

void afisare(t x[], int z) {
    for(int i=1;i<=z;i++)
        cout<<x[i].g<<" - "<<x[i].c<<" ("<<x[i].p<<" /g)"<<endl;
}
void citire() {
    f.open("data.txt");
    f>>G>>n;
    for(int i=1;i<=n;i++) {
        f>>h[i].g>>h[i].c;
        h[i].p=(float) h[i].c/h[i].g;
    }
    f.close();
}
void Sort() {
    for (int i=1; i<=n; i++)
        for (int j=1; j<=n-i; j++)
            if (h[j].p < h[j+1].p)
                swap(h[j], h[j+1]);
}
void greedy() {
    int grame=0;
    for(int i=1;i<=n;i++) {
        if (grame+h[i].g<=G) {
            sol[m]=h[i];
            grame+=h[i].g;
            m++;
        } else if(grame+h[i].g>G && grame<G) {
            sol[m].g=G-grame;
            sol[m].c=sol[m].g*h[i].p;
            sol[m].p=h[i].p;
            m++;
            return;
        }
    }
}
int main() {
    citire();
    Sort();
    greedy();
    afisare(sol,m-1);
    return 0;
}

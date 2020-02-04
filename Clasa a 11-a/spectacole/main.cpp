#include <iostream>
#include <fstream>

using namespace std;

ifstream f;
ofstream g;
int n,m;
struct time { int x,y,dur; } s[100], sol[100];

void citire() {
    f.open("data.in");
    f>>n;
    for(int i=1;i<=n;i++) {
        f>>s[i].x>>s[i].y;
        s[i].dur=s[i].y-s[i].x;
    }
    f.close();
}

void afisare(time x[], int z) {
    for(int i=1;i<=z;i++)
        cout<<x[i].x<<" - "<<x[i].y<<endl;
}

void Sort() {
    for (int i=1; i<=n; i++)
        for (int j=1; j<=n-i; j++)
            if (s[j].y > s[j+1].y)
                swap(s[j], s[j+1]);
}

void greedy() {
    sol[1]=s[1];m++;
    for(int i=2;i<=n;i++) {
        int durmin=25,k=0;
        for(int j=i;j<=n;j++)
            if(s[j].x>=sol[m].y && s[j].dur<durmin) {
                sol[m+1]=s[j];
                k=1;
                durmin=s[j].dur;
            }
        if(k) m++;
    }
}

int main() {
    citire();
    Sort();
    greedy();
    afisare(sol,m);
    return 0;
}

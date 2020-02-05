#include <iostream>
#include <fstream>

using namespace std;

ifstream f;
ofstream g;
int n,m;
struct time { int x,y; } s[100], sol[100];

void citire() {
    f.open("spectacole.in");
    f>>n;
    for(int i=1;i<=n;i++)
        f>>s[i].x>>s[i].y;
    f.close();
}

void Sort() {
    for (int i=1; i<=n; i++)
        for (int j=1; j<=n-i; j++)
            if (s[j].y > s[j+1].y)
                swap(s[j], s[j+1]);
}
void greedy() {
    sol[1]=s[1];m=2;
    for(int i=1;i<=n;i++)
        if(s[i].x>=sol[m-1].y) {
            sol[m]=s[i];
            m++;
        }
}

int main() {
    citire();
    Sort();
    greedy();
    ofstream g("spectacole.out");g<<m-1;g.close();
    return 0;
}

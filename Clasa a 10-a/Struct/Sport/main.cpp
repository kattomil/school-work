#include <iostream>
#include <cstring>
#include <fstream>

using namespace std;

struct timp {
    int secunde, minute;
};
struct elev {
    char nume[21], prenume[21];
    timp t;
};

void citire(elev e[], timp & t, int & i) {
    i=0;
    ifstream f("rezistenta.in");
    f>>t.minute>>t.secunde;
    while(f>>e[i].nume>>e[i].prenume>>e[i].t.minute>>e[i].t.secunde) i++;
    f.close();
}

void eleviTrecuti(elev e[], elev r[], int i, int & k, timp t) {
    k=0;
    int sec=t.minute*60+t.secunde;
    for (int j=0; j<i; j++) {
        int secElev=e[j].t.minute*60+e[j].t.secunde;
        if (sec>=secElev) {
            r[k]=e[j];
            k++;
        }
    }
}

void ordonare(elev r[], int k) {
    int ok=1;
    do {
        ok=1;
        for (int j=0; j<k-1; j++) {
            int elev1=r[j].t.minute*60+r[j].t.secunde, elev2=r[j+1].t.minute*60+r[j+1].t.secunde;
            if (strcmp(r[j].nume, r[j+1].nume)>0 || (strcmp(r[j].nume, r[j+1].nume)==0 && elev1>elev2))
                swap(r[j], r[j+1]);
        }
    }while(ok==0);
}

void rezultat(elev r[], int k) {
    ofstream g("rezistenta.out");
    for (int j=0; j<k; j++) g << r[j].nume << " " << r[j].prenume << " " << r[j].t.minute << ":" << r[j].t.secunde << endl;
    g.close();
}

int main()
{
    int i=0, k=0;
    elev e[30], r[30];
    timp t;
    citire(e, t, i);
    eleviTrecuti(e, r, i, k, t);
    ordonare(r, k);
    rezultat(r, k);
    return 0;
}

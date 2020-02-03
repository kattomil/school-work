#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

char poezie[2000][2001];
ifstream f("poezie.in");
ofstream g("poezie.out");
int maxim=0, nrv=0;

int main()
{
    while (f.getline(poezie[nrv], 2000)) {
        if (strlen(poezie[nrv])>maxim) maxim=strlen(poezie[nrv]);
        nrv++;
    }
    g << nrv << " " << maxim << endl;
    int k=1;
    do {
        k=1;
        for (int i=1; i<nrv; i++)
            if (strlen(poezie[i-1]) < strlen(poezie[i])) {
                char aux[2001];
                strcpy(aux, poezie[i]);
                strcpy(poezie[i], poezie[i-1]);
                strcpy(poezie[i-1], aux);
                k=0;
            }
    } while (k==0);
    for (int i=0; i<nrv; i++) g << poezie[i] << endl;
    return 0;
}

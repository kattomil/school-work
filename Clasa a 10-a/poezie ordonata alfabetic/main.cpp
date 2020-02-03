#include <iostream>
#include <fstream>
#include <string.h>

using namespace std;

ifstream f;
int n,m;
int main()
{
    char matrice[100][100];
    f.open("poezie.txt");
    n=0;
    while (f.getline(matrice[n], 100)) n++;
    do {
        m=1;
        for (int i=0; i<n; i++) {
            if (strcmp(matrice[i], matrice[i+1]) > 0) {
                char t[100];
                strcpy(t, matrice[i]);
                strcpy(matrice[i], matrice[i+1]);
                strcpy(matrice[i+1], t);
                m=0;
            }
        }
    } while (m==0);
    for (int i=0; i<=n; i++) cout << matrice[i] << endl;
    return 0;
}

#include <iostream>
#include <cstring>
#include <fstream>

using namespace std;

int main()
{
    ifstream f("VERSURI.TXT");
    int n, i=0, k=0, maxim=0;
    f >> n;
    f.get();
    char m[n][2001];
    while (f.getline(m[i], 2000)) {
        cout << m[i] << endl;
        if (strlen(m[i])>maxim) maxim=strlen(m[i]);
        i++;
    }
    do {
        k=1;
        for (int j=1; j<i; j++)
            if (strlen(m[j]) < strlen(m[j-1])) {
                char aux[2001];
                strcpy(aux, m[j]);
                strcpy(m[j], m[j-1]);
                strcpy(m[j-1], aux);
                k=0;
            }
    }while(k==0);
    cout << endl;
    k=0;
    while (k<i) {
        cout << m[k] << endl;
        k++;
    }
    cout << endl;
    k=0;
    while (k<i) {
        if (strlen(m[k]) == maxim) cout << m[k] << endl;
        k++;
    }
    return 0;
}

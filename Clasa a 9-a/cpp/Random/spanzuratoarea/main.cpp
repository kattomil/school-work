#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int Okay(char c[], int n, char g[]);
void afisare(char x[], int n);

int main()
{
    char c[20], g[20], litera;
    int n;
    cout << "Introduceti numarul de litere: ";
    cin >> n;
    srand(time(NULL));
    for (int i=0; i<n; ++i) {
        c[i]='A'+rand()%('Z'-'A'+1);
        g[i]='_';
    }
    do {
        afisare(g, n);
        cout << "\nIntroduceti Litera: ";
        cin >> litera;
        for (int i=0; i<n; ++i)
            if (litera == c[i])
                g[i] = litera;
    } while(Okay(c,n,g) == 0);
    afisare(g, n);
    return 0;
}

int Okay(char c[], int n, char g[]) {
    for (int i=0; i<n; ++i)
        if (c[i]!=g[i])
            return 0;
    return 1;
}

void afisare(char x[], int n) {
    cout << '\n';
    for (int i=0; i<n; ++i) cout << x[i];
}

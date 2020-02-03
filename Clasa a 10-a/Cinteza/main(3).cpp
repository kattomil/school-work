#include <iostream>

using namespace std;

/** Antet 1 */
int resturi(int n, int x, int y, int z);

/** Antet 2 */
int echilibrat(int n);

/** Antet 3 */
void inserare(int&n, int v[]);

int main() {
    /** Variabile */
    int n, nn, nnn,x,y,r,v[10001];
    /** Apel 1 */
    cout << "n=";
    cin >> n;
    cout << "x=";
    cin >> x;
    cout << "y=";
    cin >> y;
    cout << "r=";
    cin >> r;
    cout << resturi(n,x,y,r);

    cout << endl;

    /** Apel 2 */
    cout << "nn=";
    cin >> nn;
    cout << echilibrat(nn);

    cout << endl;

    /** Apel 3 */
    cout << "nnn=";
    cin >> nnn;
    for (int i=0; i<nnn; i++) {
        cout << "v["<<i<<"]=";
        cin >> v[i];
    }
    inserare(nnn, v);
    for (int i=0; i<nnn; i++) cout << v[i] << " ";

    return 0;
}

/** Subprogram 1 */
int resturi(int n, int x, int y, int r) {
    int s=0;
    for (int i=1; i<=n; i++)
        if (i%x==r && i%y==r) s++;
    return s;
}

/** Subprogram 2 */
int echilibrat(int n) {
    int si=0, sp=0, i=0;
    while (n>0) {
        int c = n%10;
        if (i%2==0 && c%2==0) sp+=c;
        else if (i%2!=0 && c%2!=0) si+=c;
        i++;
        n/=10;
    }
    if (sp%2==0 && si%2!=0) return 1;
    else return 0;
}

/** Subprogram 3 */
void inserare(int&n, int v[]) {
    for (int i=0; i<n; i++)
        if (v[i]%2==0) {
            for (int j=n; j>i; j--)
                v[j]=v[j-1];
            i++;
            v[i-1]=v[i]/2;
            n++;
        }
}

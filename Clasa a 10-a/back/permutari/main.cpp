#include <iostream>

using namespace std;

namespace sol {
    int n=0;
};

int n,x[100];

void afisare(int k) {
    for (int i=1; i<k; i++) cout << x[i] << " ";
    cout << endl;
    sol::n++;
};

int solutie(int k) {
    if (k==n+1) return 1;
    return 0;
};

int valid(int k) {
    for (int i=1; i<k; i++)
        if(x[i]==x[k]) return 0;
    return 1;
};

void permutari(int k) {
    if (solutie(k)) afisare(k);
    else for (int i=1; i<=n; i++) {
        x[k]=i;
        if (valid(k)) permutari(k+1);
    };
};

int main() {
    cin >> n;
    permutari(1);
    cout << sol::n;
    return 0;
};

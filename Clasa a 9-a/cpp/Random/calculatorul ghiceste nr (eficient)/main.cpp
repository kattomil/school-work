#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()
{
    int x,y,p=1,k=0,u=100;
    srand(time(NULL));
    cout << "Calculatorul Ghiceste numarul intre [1, 100] :\n";
    do {
        cin >> x;
        if (!(x>=1 && x<=100)) cout << "Numar invalid.\n";
    } while (!(x>=1 && x<=100));
    cout << "Numere incercate:\n[ ";
    do {
        y = p + rand()% (u+1 - p);
        k++;
        cout << y << " ";
        if (y>x) u=y-1;
        if (y<x) p=y+1;
    } while (x!=y);
    cout << "]\n\n";
    cout << "Calculatorul a ghicit numarul " << x << " din " << k << " incercari !\n\n";
    return 0;
}

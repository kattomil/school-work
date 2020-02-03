#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()
{
    int x,y,k=0;
    srand(time(NULL));
    x = rand()%100+1;
    cout << "Ghiceste numarul intre [1, 100] :\n";
    do {
        cin >> y;
        k++;
        if (y<x) cout << "Numarul " << y << " este prea mic !\n";
        if (y>x) cout << "Numarul " << y << " este prea mare !\n";
    } while (x!=y);
    if (k > 1) cout << "Ai ghicit numarul " << x << " din " << k << " incercari!";
    else if (k == 1) cout << "Ai ghicit numarul " << x << " din o incercare!";
    return 0;
}

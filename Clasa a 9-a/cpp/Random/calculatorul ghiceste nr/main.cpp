#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()
{
    int x,y,k=0, v[100001];
    srand(time(NULL));
    cout << "Calculatorul Ghiceste numarul intre [1, 100] :\n";
    cin >> x;
    do {
        y = rand()%100+1;
        v[k] = y;
        k++;
    } while (x!=y);
    cout << "Calculatorul a ghicit numarul " << x << " din " << k << " incercari !\nNumere incercate:\n[ ";
    for (int i=0; i<k; ++i) cout << v[i] << " ";
    cout << "]";
    return 0;
}

#include <iostream>
#include <stdlib.h>
using namespace std;
int main()
{
    int x=0, y=0, aux=0, p=0, contor=0;
    cout << "x = ";
    cin >> x;
    aux = x;
    while (aux != 0) {
        ++contor;
        aux/=10;
    }
    for (int i=0; i<contor; ++i) {
        p=1;
        y=0;
        while (x > 9) {
            y+=p*(x%10);
            p*=10;
            x/=10;
        }
        y=y*10+x;
        cout<<y<<endl;
        x=y;
    }
    return 0;
}

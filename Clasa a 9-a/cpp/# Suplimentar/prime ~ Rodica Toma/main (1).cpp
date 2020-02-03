#include <iostream>

using namespace std;

/**
Numere prime pe un interval.
*/

int main() {
    int a,b, x, d, prim;
    cout << "a = ";
    cin >> a;
    cout << "b = ";
    cin >> b;
    if (b < a) {
        swap(a,b);
    }
    for (x=a; x <= b; x++) {
            //aici trebuie sa verifice daca x e prim
            prim=1; //pp ca e prim
            for(d=2; d*d<=x;++d){
                if(x%d==0){
                    prim=0;
                }
            }
            if(prim==1){
                cout<<x<<' ';
            }
    }
    return 0;
}

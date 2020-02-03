#include <iostream>
using namespace std;
int main()
{
    int x=0, y=0, aux=0, p=0;
    cout << "x = ";
    cin >> x;
    aux = x;
    do {
        p=1;
        y=0;
        while (x>9) {
            y+=p*(x%10);
            p*=10;
            x/=10;
        }
        y=y*10+x;
        cout<<y<<endl;
        x=y;
    } while (y!=aux);
    return 0;
}

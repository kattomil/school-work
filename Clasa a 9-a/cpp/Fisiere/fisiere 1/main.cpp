#include <iostream>
#include <fstream>

using namespace std;

ifstream citeste("nr.in");

int main()
{
    float x, s=0.0, ss=0.0;
    int n;
    citeste >> n;
    for (int i=1; i<=n; ++i) {
        citeste >> x;
        if (x == (int) x) {
            s+=x;
            ss++;
        }
    }
    citeste.close();
    cout << (float) s/ss << endl;
    return 0;
}

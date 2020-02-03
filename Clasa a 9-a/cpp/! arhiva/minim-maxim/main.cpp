#include <iostream>

using namespace std;

/**
    Se citeste un numar natural n
    determinati cifra minima si maxima din numar
**/

int main()
{
    int n, maxim, minim, c;
    cout << "N este egal cu... ";
    cin >> n;
    minim = n%10;
    maxim = n%10;
    while (n > 0) {
        c = n%10;
        if (maxim < c) {
            maxim=c;
        }
        if (minim > c) {
            minim=c;
        }
        n = n/10;
    }
    cout << "Cifra minima: " << minim << endl;
    cout << "Cifra maxima: " << maxim << endl;
    return 0;
}

#include <iostream>

using namespace std;

int suma(int a, int b) {
    return a+b;
};

int main()
{
    int a=0, b=0;
    cout << "Introduceti doua valori:\n";
    cin >> a >> b;
    cout << "Suma lor este: " << suma(a, b);
    return 0;
}

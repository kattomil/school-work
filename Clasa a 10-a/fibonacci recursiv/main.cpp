#include <iostream>

using namespace std;

int fibo(int n) {
    if (n==1 || n==2) return 1;
    else return fibo(n-2)+fibo(n-1);
}

int main() {
    cout << fibo(5) << endl;
    return 0;
}

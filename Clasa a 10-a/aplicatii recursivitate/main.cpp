#include <iostream>

using namespace std;

//interative

void intCifreOrdineInversa(int n) {
    while (n) {
        cout << n%10;
        n/=10;
    }
}

int intSumaCifre(int n) {
    int s=0;
    while (n) {
        s+=n%10;
        n/=10;
    }
    return s;
}

int intSumaCifrePare(int n) {
    int s=0;
    while (n) {
        if(n%2==0) s+=n%10;
        n/=10;
    }
    return s;
}

//recursive

void recCifreOrdineInversa(int n) {
    if (n>0) {
        cout << n%10;
        recCifreOrdineInversa(n/10);
    }
}

int recSumaCifre(int n) {
    if (n==0) return 0;
    else return n%10+recSumaCifre(n/10);
}

int recSumaCifrePare(int n) {
    if (n==0) return 0;
    else if (n%2==0) return n%10+recSumaCifrePare(n/10);
}

int main()
{
    return 0;
}

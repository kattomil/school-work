#include <iostream>
#include <cstring>

using namespace std;

void nrIterativ() {
    int n;
    cin >> n;
    while (n) {
        //prelucram n;
        cin >> n;
    }
}

void charIterativ() {
    char x;
    cin >> x;
    while(x!='.') {
        cin >> x;
    }
}

void sirIterativ() {
    char z[20];
    cin >> z;
    while (strcmp(z, "stop")!=0) {
        cin >> z;
    }
}

void siruriIterativ() {
    char a[51];
    cin.getline(a, 50);
    if (strcmp(a, "stop")!=0) {
        cin.getline(a, 50);
    }
}

void nrRecursiv() {
    int n;
    cin >> n;
    if (n>0) {
        //prelucram n;
        nrRecursiv();
        //putem prelucra n si dupa dar va afisa rezultatele in ordine inversa;
    }
}

void charRecursiv() {
    char x;
    cin >> x;
    if (x!='.') {
        charRecursiv();
    }
}

void sirRecursiv() {
    char z[20];
    cin >> z;
    if (strcmp(z, "stop")!=0) {
        sirRecursiv();
    }
}

void siruriRecursiv() {
    char a[51];
    cin.getline(a, 50);
    if (strcmp(a, "stop")!=0) {
        siruriRecursiv();
    }
}

int main()
{
    siruriIterativ();
    siruriRecursiv();
    return 0;
}

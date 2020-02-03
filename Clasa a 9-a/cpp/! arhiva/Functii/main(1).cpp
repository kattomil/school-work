#include <iostream>
#include <string>

using namespace std;

int minim(int a, int b) {
    if (a > b) {
        return b;
    } else if (a < b) {
        return a;
    }
}

float f(float x) {
    int rezultat = x*x*x;
    return rezultat;
}

int maxim(int a, int b) {
    if (a < b) {
        return b;
    } else if (a > b) {
        return a;
    }
}

int main() {
    string alegere;
    cout << "Alegeti dintre: minim , ^3 , maxim" << endl;
    cout << "Ai ales: ";
    cin >> alegere;
    cout << endl << endl;
    if (alegere == "minim") {
        int a,b;
        cout << "Introduceti doua valori !" << endl;
        cout << "a = ";
        cin >> a;
        cout << "b = ";
        cin >> b;
        cout << endl << "Numarul minim este " << minim(a, b) << " !" << endl;
    } else if (alegere == "maxim") {
        int a,b;
        cout << "Introduceti doua valori !" << endl;
        cout << "a = ";
        cin >> a;
        cout << "b = ";
        cin >> b;
        cout << endl << "Numarul maxim este " << maxim(a, b) << " !" << endl;
    } else if (alegere == "^3") {
        int x;
        cout << "Introduceti o valoare pentru x: ";
        cin >> x;
        cout << "x^3 = " << f(x) << endl;
    } else cout << "Variante de ales: minim , ^3 , maxim";
    return 0;
}

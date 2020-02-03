#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

struct craciun {
    char prenume[50];
    int ani, rand;
};

void citire(craciun c[], int & n) {
    n=0;
    ifstream f("craciun.txt");
    while(f>>c[n].rand>>c[n].prenume>>c[n].ani) n++;
    f.close();
}

void afisare(craciun c[], int n) {
    for (int i=0; i<n; i++)
        cout << c[i].rand << ", " << c[i].prenume << ", " << c[i].ani << " ani" << endl;
}

void ordonare(craciun c[], int n) {
    int ok=1;
    do {
        ok=1;
        for (int i=0; i<n-1; i++)
            if (c[i].ani>c[i+1].ani) {
                swap(c[i], c[i+1]);
                ok=0;
            } else if (c[i].ani==c[i+1].ani && strcmp(c[i].prenume, c[i+1].prenume)>0) {
                swap(c[i], c[i+1]);
                ok=0;
            }
    }while(ok==0);
    cout << "Copiii au fost ordonati!" << endl;
}

int maxRand(craciun c[], int n) {
    int maxim=0;
    for (int i=0; i<n; i++)
        if (c[i].rand>maxim) maxim=c[i].rand;
    return maxim;
}

void adaugare(craciun c[], int & n) {
    c[n].rand=maxRand(c,n)+1;
    cout << "Introduceti prenumele copilului: ";
    cin >> c[n].prenume;
    cout << "Introduceti varsta copilului: ";
    cin >> c[n].ani;
    n++;
    cout << "Copil adaugat!" << endl;
}

int varstaMinima(craciun c[], int n) {
    int minim=999;
    for (int i=0; i<n; i++)
        if (c[i].ani<minim) minim=c[i].ani;
    return minim;
}

void afisareVarstaMinima(craciun c[], int n) {
    int vm=varstaMinima(c,n);
    for (int i=0; i<n; i++)
        if (c[i].ani==vm)
            cout << c[i].rand << ", " << c[i].prenume << ", " << c[i].ani << " ani" << endl;
}

void salvare(craciun c[], int n) {
    ofstream g("craciun.txt");
    for (int i=0; i<n; i++)
        g<<c[i].rand<<" "<<c[i].prenume<<" "<<c[i].ani<<endl;
    g.close();
    cout << "Toate modificarile au fost salvate in `craciun.txt`" << endl;
}

int main()
{
    craciun c[50];
    int n=0, alegere;
    citire(c,n);
    do {
        cout << "Meniu:" << endl;
        cout << "1- Afisare" << endl;
        cout << "2- Ordonare copii" << endl;
        cout << "3- Adaugare copil" << endl;
        cout << "4- Afisare copii varsta minima" << endl;
        cout << "5- Salvare" << endl;
        cout << "6- Exit" << endl;
        cout << "Alegere: ";
        cin>>alegere;
        switch(alegere) {
        case 1:afisare(c,n);break;
        case 2:ordonare(c,n);break;
        case 3:adaugare(c,n);break;
        case 4:afisareVarstaMinima(c,n);break;
        case 5:salvare(c,n);break;
        }
    }while(alegere!=6);
    return 0;
}

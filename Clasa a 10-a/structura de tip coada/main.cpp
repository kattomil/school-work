#include <iostream>

using namespace std;

struct casa {
    char nume[50];
    int pret, cantitate;
    casa *next;
};

void adaugare(casa *&p, casa*&u) {
    cin.get();
    if (p==0) {
        p=new casa;
        cout << "Nume produs: ";
        cin.getline(p->nume, 50);
        cout << "Pret: ";
        cin >> p->pret;
        cout << "Cantitate: ";
        cin >> p->cantitate;
        p->next=0;
        u=p;
    } else {
        u->next=new casa;
        u=u->next;
        cout << "Nume produs: ";
        cin.getline(u->nume, 50);
        cout << "Pret: ";
        cin >> u->pret;
        cout << "Cantitate: ";
        cin >> u->cantitate;
        u->next=0;
    }
}

long long int prelucrare(casa *&p, casa *&u) {
    if (p==0) return 0;
    casa *q;
    long long int s=0;
    while(p) {
        q=p;
        p=p->next;
        s+=q->pret*q->cantitate;
        delete q;
    }
    u=0;
    return s;
}

void afisare(casa *p) {
    while(p) {
        cout << p->nume << " | " << p->pret << " lei, cantitate: " << p->cantitate << endl;
        p=p->next;
    }
}

int main()
{
    casa *p=0,*u=0;
    int o;
    do {
        cout << endl;
        cout << "adaugare[1]" << endl;
        cout << "total pret produse[2]" << endl;
        cout << "afisare[3]" << endl;
        cout << "iesire[0]" << endl;
        cout << "optiunea: "; cin>>o;
        switch(o) {
        case 1:
            adaugare(p,u);
            break;
        case 2:
            if (prelucrare(p,u)==0) cout << "Nu exista produse" << endl;
            else cout << "Totalul este de: " << prelucrare(p,u) << " lei." << endl;
            break;
        case 3:
            afisare(p);
            break;
        }
    }while(o);
    return 0;
}

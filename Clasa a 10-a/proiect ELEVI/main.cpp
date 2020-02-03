#include <iostream>

using namespace std;

struct elev {
    int nrm, clasa;
    float media;
    char nume[50], adresa[100];
    elev* next;
};

void a(elev *p) {
    int n, k=0;
    cout << "Introduceti numarul matricol: ";
    cin >> n;
    while(p) {
        if (p->nrm==n) {
            cout << "clasa: " << p->clasa << "\nnumele: " << p->nume << "\nadresa: " << p->adresa << "\nmedia: " << p->media << endl;
            k=1;
        }
        p=p->next;
    }
    if (k==0) cout << "Nu exista" << endl;
}

void b(elev *&p, elev*&u) {
    if (p==0) {
        p=new elev;//Initializare();
        cout << "nr matricol: ";cin >> p->nrm;
        cout << "clasa: ";cin >> p->clasa; cin.get();
        cout << "nume: ";cin.getline(p->nume, 50);
        cout << "adresa: ";cin.getline(p->adresa, 100);
        cout << "media: ";cin >> p->media;
        p->next=0;
        u=p;
    } else {
        u->next=new elev; //adaugareD();
        u=u->next;
        cout << "nr matricol: ";cin >> u->nrm;
        cout << "clasa: ";cin >> u->clasa; cin.get();
        cout << "nume: ";cin.getline(u->nume, 50);
        cout << "adresa: ";cin.getline(u->adresa, 100);
        cout << "media: ";cin >> u->media;
        u->next=0;
    }
}

int main()
{
    elev *p=0, *u=0;
    int optiune;
    do {
        cout << "1-afisare elev" << endl;
        cout << "2-adaugare elev" << endl;
        cout << "0-iesire" << endl;
        cout << "optiunea: ";
        cin >> optiune;
        switch(optiune) {
        case 1:
            a(p);
            break;
        case 2:
            b(p, u);
            break;
        }
    }while(optiune!=0);
    return 0;
}

#include <iostream>
#include <cstring>

using namespace std;

struct film {
    char titlu[100], regizor[100];
    int an;
    film *next;
};

void initializare(film *&p, film *&u) {
    cout << endl << "Initializare: " << endl;
    p=0;
    p=new film;
    cin.get();
    cout << "Titlul: ";
    cin.getline(p->titlu, 100);
    cout << "Regizor: ";
    cin.getline(p->regizor, 100);
    cout << "An: ";
    cin >> p->an;
    p->next=0;
    u=p;
}

void adaugare(film *&p, film *&u) {
    cout << endl << "Adaugare: " << endl;
    if (p==0) initializare(p, u);
    else {
        u->next=new film;
        u=u->next;
        cin.get();
        cout << "Titlul: ";
        cin.getline(u->titlu, 100);
        cout << "Regizor: ";
        cin.getline(u->regizor, 100);
        cout << "An: ";
        cin >> u->an;
        u->next=0;
    }
}

void afisare(film *p, film *q, int k) {
    cout << endl << "Afisare: " << endl;
    while(p) {
        cout << p->titlu << " de " << p->regizor << " in " << p->an << endl;
        p=p->next;
    }
    cout << endl;
    if (k==1)
        while(q) {
            cout << q->titlu << " de " << q->regizor << " in " << q->an << endl;
            q=q->next;
        }
}

void cautare(film *p) {
    cout << endl << "Cautare: " << endl;
    cout << "Introduceti titlul cautat: ";
    int i=0;
    char t[100];
    cin.get();
    cin.getline(t, 100);
    while (p) {
        if (strcmp(p->titlu, t)==0) {
                cout << p->titlu << " de " << p->regizor << " in " << p->an << endl;
                i=1;
            }
        p=p->next;
    }
    if (i==0) cout << endl << "Nu exista" << endl;
}

void ad(film *p, film *&q, film *&v) {
    cout << endl << "Cautare dupa regizor: " << endl;
    cout << "Introduceti regizorul: ";
    char r[100];
    cin.get();
    cin.getline(r, 100);
    while (p!=0) {
        if (strcmp(p->regizor, r)==0) {
            if (q==0) {
                q=new film;
                q=p;
                q->next=0;
                v=q;
            } else {
                v->next=new film;
                v=v->next;
                v=p;
                v->next=0;
            }
        }
        p=p->next;
    }
}

int main()
{
    film *p=0, *u=0, *q=0, *v=0;
    int optiune, k=0;
    do {
        cout << endl;
        cout << "Initializare(1)" << endl;
        cout << "Adaugare(2)" << endl;
        cout << "Cautare film dupa titlu(3)" << endl;
        cout << "Filmele regizate de un anumit director(4)" << endl;
        cout << "Afisarea listelor(5)" << endl;
        cout << "Iesire(0)" << endl;
        cout << "Optiunea: ";
        cin >> optiune;
        switch(optiune) {
        case 1:
            initializare(p,u);
            break;
        case 2:
            adaugare(p,u);
            break;
        case 3:
            cautare(p);
            break;
        case 4:
            ad(p,q,v);
            k=1;
            break;
        case 5:
            afisare(p,q,k);
            break;
        }
    } while (optiune);
    return 0;
}

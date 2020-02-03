#include <iostream>
#include <cstring>

using namespace std;

struct carte {
    int nr, ex;
    char titlu[50], autor[50];
    carte *next;
};

void initializare(carte *&p, carte *&u, int &n) {
    p = new carte;
    cout << "Introduceti datele primei carti!\n";
    n++;
    p->nr=n;
    cout << "Titlul: ";
    cin.getline(p->titlu, 50);
    cout << "Autorul: ";
    cin.getline(p->autor, 50);
    cout << "Exemplare: ";
    cin >> p->ex;
    p->next=0;
    u=p;
};
///void adaugareD(carte *&p, carte *&u, int &n);
void afisare(carte *p) {
    while (p) {
        cout << "ID:" << p->nr << ", " << p->titlu << " de " << p->autor << ", " << p->ex << " exemplare." << endl;
        p=p->next;
    }
};
void situatii(carte *p) {
    while(p) {
        if (p->ex<10)
            cout << "ID:" << p->nr << ", " << p->titlu << " de " << p->autor << ", " << p->ex << " exemplare." << endl;
        p=p->next;
    }
};
void cua(carte *p) {
    char a[50];
    cout << "Cautati cartile de autorul: ";
    cin.getline(a, 50);
    while (p) {
        if (strcmp(a, p->autor)==0)
            cout << "ID:" << p->nr << ", " << p->titlu << " de " << p->autor << ", " << p->ex << " exemplare." << endl;
        p=p->next;
    }
};

int main()
{
    carte *p=0,*u=0;
    int optiune=0, n=0;
    do {
        cout << endl << "1-initializare";
        cout << endl << "2-adaugare dreapta";
        cout << endl << "3-afisare";
        cout << endl << "4-situatii";
        cout << endl << "5-cartile unui autor";
        cout << endl << "0-iesire" << endl;
        cout << "Optiunea: ";
        cin >> optiune;
        switch(optiune) {
        case 1:
            initializare(p,u,n);
            break;
        case 2:
            ///adaugareD(p,u,n);
            break;
        case 3:
            afisare(p);
            break;
        case 4:
            situatii(p);
            break;
        case 5:
            cua(p);
            break;
        }
    }while(optiune!=0);
    return 0;
}

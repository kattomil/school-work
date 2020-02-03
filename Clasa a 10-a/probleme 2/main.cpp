#include <iostream>

using namespace std;

struct nr {
    int n;
    nr* next;
};

void add(nr *&p, nr *&u) {
    nr *q=new nr;
    cout << "Numarul: ";
    cin >> q->n;
    if (p==0) {
        p=q;
        u=q;
        u->next=0;
    } else if (q->n < p->n) {
        q->next=p;
        p=q;
    } else if (q->n > u->n) {
        u->next=new nr;
        u=u->next;
        u->n=q->n;
        u->next=0;
    } else {
        nr *c;
        c=p;
        while (c->next->n < q->n) c=c->next;
        q->next=c->next;
        c->next=q;
    }
}

void afisare(nr *p) {
    while (p) {
        cout << p->n << " ";
        p=p->next;
    }
}

int main()
{
    nr *p=0,*u=0;
    int optiune=0, n=0;
    do {
        cout << endl << "1-adaugare numar";
        cout << endl << "2-afisare";
        cout << endl << "0-iesire" << endl;
        cout << "Optiunea: ";
        cin >> optiune;
        switch(optiune) {
        case 1:
            add(p,u);
            break;
        case 2:
            afisare(p);
            break;
        }
    }while(optiune!=0);
    return 0;
}

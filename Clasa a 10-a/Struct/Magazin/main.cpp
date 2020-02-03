#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

//Structura de Produs
struct produs {
    int nrInventar, pret, cantitate;
    char nume[51];
};

/**
FUNCTII INT:
 * maximNumarInventar
 * valoareaTuturorProduselor
 * cautareProdus
 */

int maximNumarInventar(produs p[], int i) {
    int maxim=p[0].nrInventar;
    for (int j=1; j<i; j++)
        if (p[j].nrInventar>maxim) maxim=p[j].nrInventar;
    return maxim;
};

int valoareaTuturorProduselor(produs p[], int i) {
    long long int s=0;
    for (int j=0; j<i; j++) s+=p[j].cantitate*p[j].pret;
    return s;
}

int cautareProdus(produs p[], int & j, char b[], int i) {
    produs z[20];
    int y[20];
    int x=0;
    for (j=0; j<i; j++) if (strstr(p[j].nume, b)) {
        z[x]=p[j]; //copiere bit cu bit
        y[x]=j;
        x++;
    }
    if (x==0) return 0; 
    cout << "Alegeti id-ul produsului dorit:"<<endl;
    for (j=0; j<x; j++) cout << "ID: " << y[j] << ", Nume: " << z[j].nume << ", Pret: " << z[j].pret << ", Cantitate: " << z[j].cantitate << endl;
    cin >> j; 
    return 1;
};

/**
 FUNCTII VOID :
 * citire
 * save
 * afisare
 * stocCritic
 * ordonare * crescator
 * eliminare
 * modificare
 * vanzare
 * aprovizionare
 */

 void citire(produs p[], int & i) {
    ifstream f("magazie.txt");
    while (f>>p[i].nrInventar>>p[i].nume>>p[i].pret>>p[i].cantitate) i++;
    f.close();
 }

void save(produs p[], int i) {
    ofstream g("magazie.txt");
    for (int j=0; j<i; j++) g<<p[j].nrInventar << " " <<p[j].nume << " " <<p[j].pret << " " <<p[j].cantitate<<endl;
    g.close();
};

void afisare(produs p[], int i) {
    cout << "Inventar:" << endl;
    for (int j=0; j<i; j++)
        cout << p[j].nrInventar << ": " << p[j].nume << ", " << p[j].pret << " RON, " << p[j].cantitate << " BUCATI"<<endl;
};

void stocCritic(produs p[], int i) {
    cout << "STOC CRITIC: " << endl;
    for (int j=0; j<i; j++)
        if (p[j].cantitate <= 5) cout << p[j].nrInventar << " " <<p[j].nume << " " <<p[j].pret << " " <<p[j].cantitate<<endl;
};

void ordonare(produs p[], int i) {
    int ok=1;
    do {
        ok=1;
        for (int j=0; j<i-1; j++)
            if (strcmp(p[j].nume, p[j+1].nume)>0 || (strcmp(p[j].nume, p[j+1].nume)==0 && p[j].pret>p[j+1].pret)) {
                produs aux;
                aux=p[j];
                p[j]=p[j+1];
                p[j+1]=aux;
                ok=0;
            }
    }while(ok==0);
    cout << "Produsele au fost ordonate alfabetic:" << endl;
    afisare(p, i);
}

void eliminare(produs p[], int &i) {
    int j=0, s=0;
    char b[51];
    do {
        cout << "Introduceti nume produs:";
        cin >> b;
        s=cautareProdus(p, j, b, i);
        if (s!=1) cout << "Produs Inexistent." << endl;
    } while (s!=1);
    for (int k=j; k<i-1; k++) p[k]=p[k+1];
    i--;
};

void modificare(produs p[], int &i) {
    int j=0, s=0;
    char b[51];
    cout << "Introduceti nume produs:";
    cin >> b;
    s=cautareProdus(p, j, b, i);
    if (s==1) {
        int d=0;
        cout << "Ce doriti sa modificati?:"<<endl;
        cout << "1 - nume \n2 - pret \n3 - cantitate \n Alegerea:";
        cin >> d;
        if (d==1) {
            cout << "Introduceti noul nume: ";
            cin >> p[j].nume;
        } else if (d==2) {
            cout << "Introduceti noul pret: ";
            cin >> p[j].pret;
        } else if (d==3) {
            cout << "Introduceti noua cantitate: ";
            cin >> p[j].cantitate;
        }
    } else {
        strcpy(p[i].nume, b);
        p[i].nrInventar=maximNumarInventar(p, i)+1;
        cout << "Introduceti pretul produsului: ";
        cin >> p[i].pret;
        cout << "Introduceti cantitatea produsului: ";
        cin >> p[i].cantitate;
        i++;
    }
};

void vanzare(produs p[], int &i) {
    int j=0, s=0;
    char b[51];
    cout << "Introduceti nume produs:";
    cin >> b;
    s=cautareProdus(p, j, b, i);
    if (s==1) {
        int c=0;
        cout << "Introduceti cate bucati din " << p[j].nume << " vandute : ";
        do {
                cin >> c;
                if (c>p[j].cantitate) cout << "Nu aveti atatea produse. Incercati un numar de produse existent: ";
            } while (c>p[j].cantitate);
        p[j].cantitate-=c;
    } else {
        strcpy(p[i].nume, b);
        p[i].nrInventar=maximNumarInventar(p, i)+1;
        cout << "Introduceti pretul produsului: ";
        cin >> p[i].pret;
        cout << "Introduceti cantitatea produsului: ";
        cin >> p[i].cantitate;
        i++;
    }
};

void aprovizionare(produs p[], int &i) {
    int j=0, s=0;
    char b[51];
    cout << "Introduceti nume produs:";
    cin >> b;
    s=cautareProdus(p, j, b, i);
    if (s==1) {
        int c=0;
        cout << "Introduceti numarul de produse aprovizionate " << p[j].nume << " : ";
        cin >> c;
        p[j].cantitate+=c;
    } else {
        strcpy(p[i].nume, b);
        p[i].nrInventar=maximNumarInventar(p, i)+1;
        cout << "Introduceti pretul produsului: ";
        cin >> p[i].pret;
        cout << "Introduceti cantitatea produsului: ";
        cin >> p[i].cantitate;
        i++;
    }
};

/**
 * FUNCTIA MAIN
 */

int main()
{
    produs p[20];
    int k=0, i=0;
    citire(p, i);
    afisare(p,i);
    do {
        cout << endl << "Meniu:" << endl;
        cout << "1 - modificare produs" << endl;
        cout << "2 - vanzarea unei cantitati dintr-un produs" << endl;
        cout << "3 - aprovizionarea unui produs" << endl;
        cout << "4 - afisare inventar" << endl;
        cout << "5 - eliminare produs" << endl;
        cout << "6 - afisare stoc critic" << endl;
        cout << "7 - ordonare alfabetica" << endl;
        cout << "0 - inchidere Program" << endl;
        cout << "Optiunea aleasa:";
        cin>>k;
        switch(k) {
            case 1: modificare(p,i);save(p, i);break;
            case 2: vanzare(p,i);save(p, i);break;
            case 3: aprovizionare(p,i);save(p, i);break;
            case 4: afisare(p,i);break;
            case 5: eliminare(p,i);save(p, i);break;
            case 6: stocCritic(p,i);break;
            case 7: ordonare(p, i);save(p, i);break;
        };
    } while (k!=0);
    return 0;
}

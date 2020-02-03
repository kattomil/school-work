#include <iostream>
#include <cstring>
#include <fstream>

using namespace std;

/**
STRUCTURI
*/

struct adresa {
    char localitatea[20], strada[20];
    int nr;
};

struct data {
    int zi, luna, an;
};

struct banca {
    int id;
    adresa adr;
};

struct card {
    int nrCard, limita, nrCont;
    data emitere, expirare;
};

struct cont {
    int nrCont, soldInitial;
    char nume[51], prenume[51], cnp[51];
    adresa adr;
    data deschidere;
};

struct depunere {
    data dep;
    char nume[51], prenume[51];
    int suma;
};

/**
BANCA
*/

void citireBanca(banca b[], int & nb) {
    fstream f("banca.txt");
    nb=0;
    while (f>>b[nb].adr.localitatea>>b[nb].adr.strada>>b[nb].adr.nr) {
        b[nb].id=nb+1;
        nb++;
    };
    f.close();
};

/**
CARDURI
*/

void citireCard(card ca[], cont co[], int & nca, int nco) {
    nca=0;
    int k=0;
    ifstream f("carduri.txt");
    while (f>>ca[nca].nrCont>>ca[nca].limita>>ca[nca].emitere.zi>>ca[nca].emitere.luna>>ca[nca].emitere.an>>ca[nca].expirare.zi>>ca[nca].expirare.luna>>ca[nca].expirare.an) {
        ca[nca].nrCard=nca+1;
        nca++;
    };
    for (int i=0; i<nca-1; i++) {
        k=0;
        for (int j=0; j<nco; j++)
            if (ca[i].nrCont==co[j].nrCont) k=1;
        if (k==0) {
            ca[i]=ca[i+1];
            nca--;
        };
    };
    if (ca[nca-1].nrCont!=co[nco-1].nrCont) {
        ca[nca-1]={ };
        nca--;
    };
    f.close();
};

void salvareCard(card ca[], int nca) {
    ofstream f("carduri.txt");
    for (int i=0; i<nca; i++)
        f<<ca[i].nrCont<<" "<<ca[i].limita<<" "<<ca[i].emitere.zi<<" "<<ca[i].emitere.luna<<" "<<ca[i].emitere.an<<" "<<ca[i].expirare.zi<<" "<<ca[i].expirare.luna<<" "<<ca[i].expirare.an<<endl;
    f.close();
};

/**
CONTURI
*/

int cautareCont(cont c[], int nco, int nrCont) {
    for (int i=0; i<nco; i++)
        if (c[i].nrCont==nrCont) return i;
    return -1;
};

void salvareCont(cont c[], int nco) {
    ofstream f("conturi.txt");
    for (int i=0; i<nco; i++)
        f<<c[i].soldInitial<<" "<<c[i].nume<<" "<<c[i].prenume<<" "<<c[i].cnp<<" "<<c[i].deschidere.zi<<" "<<c[i].deschidere.luna<<" "<<c[i].deschidere.an<<" "<<c[i].adr.localitatea<<" "<<c[i].adr.strada<<" "<<c[i].adr.nr<<endl;
    f.close();
};

void depune(cont co[], int nco, int nd) {
    depunere d;
    int nrc;
    do {
        cout << "Introduceti nr cont: ";
        cin >> nrc;
        if (cautareCont(co, nco, nrc)==-1) cout << "Nr cont invalid. Incercati din nou.\n";
    } while (cautareCont(co, nco, nrc)==-1);
    cout << "Introduceti suma: ";cin >> d.suma;
    cout << "Introduceti numele dvs: ";cin >> d.nume;
    cout << "Introduceti prenumele dvs: ";cin >> d.prenume;
    cout << "Introduceti data de astazi (numeric): " << endl;
    cout << "Ziua: ";cin >> d.dep.zi;
    cout << "Luna: ";cin >> d.dep.luna;
    cout << "Anul: ";cin >> d.dep.an;
    ofstream f("depuneri.txt", ios::app);
    f<<nrc<< " " << d.suma << " " << d.nume << " " << d.prenume << " " << d.dep.zi << " " << d.dep.luna << " " << d.dep.an << endl;
    f.close();
};

void citireCont(cont c[], int & nco) {
    nco=0;
    ifstream f("conturi.txt");
    while (f>>c[nco].soldInitial>>c[nco].nume>>c[nco].prenume>>c[nco].cnp>>c[nco].deschidere.zi>>c[nco].deschidere.luna>>c[nco].deschidere.an>>c[nco].adr.localitatea>>c[nco].adr.strada>>c[nco].adr.nr) {
        c[nco].nrCont=nco+1;
        nco++;
    };
    f.close();
};

void afisareCont(cont c[], int nco) {
    cout << "Conturi: " << endl;
    for (int i=0; i<nco; i++)
        cout << c[i].nrCont << " " << c[i].nume << " " << c[i].prenume << " " << c[i].cnp << " " << c[i].soldInitial << " " << c[i].deschidere.zi << "/" << c[i].deschidere.luna << "/" << c[i].deschidere.an << " "  << c[i].adr.localitatea << ", " << c[i].adr.strada << ", " << c[i].adr.nr << endl;
};

/**
MAIN / MENIU
*/

int main()
{
    cont co[50];
    card ca[50];
    int nca=0, nco=0, nd=0;
    citireCont(co, nco);
    citireCard(ca, co, nca, nco);
    salvareCard(ca, nca);
    depune(co, nco, nd);
    return 0;
};

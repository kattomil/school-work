#include <iostream>
#include <fstream>

using namespace std;

struct angajat {
    int cod;
    char nume[20], prenume[20];
    struct {
        int an,luna,zi;
    }data_angajarii;
    float salariu;
};

void citire(angajat a[], int & i) {
    i=0;
    ifstream f("angajati.txt");
    while(f>>a[i].cod>>a[i].nume>>a[i].prenume>>a[i].data_angajarii.an>>a[i].data_angajarii.luna>>a[i].data_angajarii.zi>>a[i].salariu) i++;
    f.close();
}

void afisare(angajat a[], int i) {
    for (int j=0; j<i; j++) {
        cout << a[j].cod << ": " << a[j].nume << " " << a[j].prenume << " ";
        cout << a[j].data_angajarii.an << "\\" << a[j].data_angajarii.luna << "\\" << a[j].data_angajarii.zi << " ";
        cout << a[j].salariu << endl;
    }
}

void ordonare(angajat a[], int i) {
    int ok=1;
    do {
        ok=1;
        for (int j=0; j<i-1; j++)
            if (a[j].data_angajarii.an>a[j+1].data_angajarii.an) {
                swap(a[j], a[j+1]);
                ok=0;
            } else if (a[j].data_angajarii.an==a[j+1].data_angajarii.an && a[j].data_angajarii.luna>a[j+1].data_angajarii.luna) {
                swap(a[j], a[j+1]);
                ok=0;
            }
            else if (a[j].data_angajarii.an==a[j+1].data_angajarii.an && a[j].data_angajarii.luna==a[j+1].data_angajarii.luna)
                if (a[j].data_angajarii.zi>a[j+1].data_angajarii.zi) {
                swap(a[j], a[j+1]);
                ok=0;
                }
    }while(ok==0);
    cout << "Angajatii au fost ordonati crescator dupa data angajarii." << endl;
}

int codMaxim(angajat a[], int i) {
    int maxim=0;
    for (int j=0; j<i; j++) if (a[j].cod>maxim) maxim=a[j].cod;
    return maxim;
}

void adaugare(angajat a[], int & i) {
    a[i].cod=codMaxim(a, i)+1;
    cout << "Numele Angajatului: ";
    cin >> a[i].nume;
    cout << "Prenumele Angajatului: ";
    cin >> a[i].prenume;
    cout << "Data Angajarii, Anul: ";
    cin >> a[i].data_angajarii.an;
    cout << "Luna: ";
    cin >> a[i].data_angajarii.luna;
    cout << "Ziua: ";
    cin >> a[i].data_angajarii.zi;
    cout << "Salariul sau: ";
    cin >> a[i].salariu;
    i++;
}

void saraci(angajat a[], int i) {
    cout << "Angajati care au salariul sub minimul de economie:" << endl;
    for (int j=0; j<i; j++)
        if (a[j].salariu<1200.0) {
            cout << a[j].cod << ": " << a[j].nume << " " << a[j].prenume << " ";
            cout << a[j].data_angajarii.an << "\\" << a[j].data_angajarii.luna << "\\" << a[j].data_angajarii.zi << " ";
            cout << a[j].salariu << endl;
        }
}

void salvare(angajat a[], int i) {
    ofstream g("angajati.txt");
    for (int j=0; j<i; j++)
        g<<a[j].cod<<" "<<a[j].nume<<" "<<a[j].prenume<<" "<<a[j].data_angajarii.an<<" "<<a[j].data_angajarii.luna<<" "<<a[j].data_angajarii.zi<<" "<<a[j].salariu<<endl;
    g.close();
    cout << "Toate modificarile au fost salvate." << endl;
}

int main()
{
    angajat a[30];
    int i=0;
    citire(a, i);
    int alegere=0;
    do {
        cout << "Meniu:" << endl;
        cout << "1 - Afisare" << endl;
        cout << "2 - Ordonarea dupa data angajarii" << endl;
        cout << "3 - Adaugarea unui angajat" << endl;
        cout << "4 - Afisarea angajatilor care au salariul sub minimul de economie (1200)" << endl;
        cout << "5 - Salvare" << endl;
        cout << "6 - Iesire" << endl;
        cout << "Introduceti optiunea dorita: ";
        cin>>alegere;
        switch(alegere) {
        case 1:afisare(a, i);break;
        case 2:ordonare(a, i);break;
        case 3:adaugare(a, i);break;
        case 4:saraci(a, i);break;
        case 5:salvare(a, i);break;
        };
    } while (alegere!=6);
    return 0;
}

//incercati sa completati programul
#include <iostream>
#include <fstream>

using namespace std;

struct clasa
{
    int id;
    char nume[10];
    char sala[10];
};

struct elev
{
    int id;
    char nume[20];
    char prenume[20];
    int idClasa;
};

void citireClase(clasa c[], int &nc)
{
    ifstream f("clase.txt");
    nc=0;
    while(f>>c[nc].id>>c[nc].nume>>c[nc].sala) nc++;
    f.close();
}

void citireElevi(elev e[], int &ne)
{
    ifstream f("elevi.txt");
    while(f>>e[ne].id>>e[ne].nume>>e[ne].prenume>>e[ne].idClasa) ne++;
    f.close();
}

void afisareClase(clasa c[], int nc)
{
    cout << "Clase: ID, Nume, Sala" << endl;
    for (int i=0; i<nc; i++)
        cout << c[i].id << " " << c[i].nume << " " << c[i].sala << endl;
    cout << endl;
}

void afisareElevi(elev e[], int ne)
{
    cout << "Elevi: ID, Nume, Prenume, ID Clasa" << endl;
    for (int i=0; i<ne; i++)
        cout << e[i].id << " " << e[i].nume << " " << e[i].prenume << " " << e[i].idClasa << endl;
    cout << endl;
}

void ClaseElevi(clasa c[], int nc, elev e[], int ne)
{
    for (int i=0; i<nc; i++) {
        cout << "Clasa cu id " << c[i].id << " si numele " << c[i].nume << " in sala " << c[i].sala << " are elevii: "<<endl;
        for (int j=0; j<ne; j++)
            if (c[i].id==e[j].idClasa) cout << e[j].nume << " " << e[j].prenume << endl;
        cout << endl;
    }
}

int main()
{
    int optiune;

    elev e[20];
    clasa c[5];
    int ne=0, nc=0;

    citireElevi(e, ne);
    citireClase(c, nc);

    do
    {
        cout<<"1 - afisare clase"<<endl;
        cout<<"2 - afisare elevi"<<endl;
        cout<<"3 - afisare elevi pe clase"<<endl;
        cout<<"0 - exit"<<endl<<endl;
        cout<<"Tastati optiunea dorita:";
        cin>>optiune;
        switch(optiune)
        {
            case 1: afisareClase(c,nc); break;
            case 2: afisareElevi(e,ne); break;
            case 3: ClaseElevi(c,nc,e,ne);break;
        }
    }while(optiune!=0);


    return 0;
}

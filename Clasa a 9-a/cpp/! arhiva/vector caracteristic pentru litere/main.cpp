#include <iostream>
#include <fstream>

/**
fisierul "proza.txt" contine o parte din romanul Ion
afisati pe ecran in ordine alfabetica toate caracterele care apar in fisier si numarul lor de aparitii
tinand cont ca litera mare difera de litera mare
*/

using namespace std;

ifstream fin("proza.txt");
int v[256];

int main()
{
    char car;
    while (fin>>car) v[car]++;
    for (int i=0; i<256; ++i)
        if (v[i]==1) cout << (char) i << " apare odata." << endl;
        else if (v[i]>1) cout << (char) i << " apare de " << v[i] << " ori." << endl;
    fin.close();
    return 0;
}

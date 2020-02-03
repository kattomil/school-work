#include <iostream>
#include <string>

using namespace std;

int main()
{
    int media;
    string elev;
    cout << "Numele Elevului/Elevei: ";
    cin >> elev;
    cout << "Introduceti Media: ";
    cin >> media;
    while (media >= 5) {
        cout << elev << ", promovat/a cu media " << media << " !" << endl << endl;
        cout << "Numele Elevului/Elevei: ";
        cin >> elev;
        cout << "Introduceti Media: ";
        cin >> media;
    }
    cout << elev << ", repetent/a, media este mai mica decat 5, media este " << media << endl << endl << "Program Finalizat !";
    return 0;
}

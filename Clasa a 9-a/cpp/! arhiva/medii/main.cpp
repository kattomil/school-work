#include <iostream>
#include <string>

using namespace std;

int main()
{
    string elev;
    cout << "Numele Elevului/Elevei: ";
    cin >> elev;

    int media;
    cout << "Introduceti Media: ";
    cin >> media;

    while (media >= 1 && media <= 10) {
        if (media >= 5) {
            cout << elev << ", promovat!" << endl << endl;
        }
        else cout << elev << ", repetent!" << endl << endl;
        cout << "Numele Elevului/Elevei: ";
        cin >> elev;
        cout << "Introduceti Media: ";
        cin >> media;
    }
    return 0;
}

#include <iostream>
#include <string.h>
#include <fstream>

using namespace std;

char boys[200][201], girls[200][201], kids[400][201];
int a, b, c, i, j;

int main()
{
    ifstream boy("baieti.txt");
    while (boy.getline(boys[a], 200)) a++;
    boy.close();
    ifstream girl("fete.txt");
    while (girl.getline(girls[b], 200)) b++;
    girl.close();
    while (i<a && j<b)
        if (strcmp(boys[i], girls[j]) < 0) {
            strcpy(kids[c], boys[i]);
            c++; i++;
        } else {
            strcpy(kids[c], girls[j]);
            c++; j++;
        }
    while (i<a) {
        strcpy(kids[c], boys[i]);
        c++; i++;
    }
    while (j<b) {
        strcpy(kids[c], girls[j]);
        c++; j++;
    }
    for (int i=0; i<c; i++) cout << kids[i] << endl;
    return 0;
}

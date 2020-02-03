#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("cmmdc.in");
ofstream fout("cmmdc.out");

int main() {
    int a, b;
    cout << "Opening File" << endl;
    cout << "Editing File" << endl;
    fin>> a >> b;
    while( a != b){
        if( a > b){
            a = a - b;
        }else{
            b = b - a;
        }
    }

    if( a == 1 || b == 1 ){
        fout<<0;
    }else{
        fout<< a;
    }
    fin.close();
    fout.close();
    cout << "Closing File" << endl;
    return 0;
}

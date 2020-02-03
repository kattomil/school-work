#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{
    ifstream f("adunare.in");
    cout << "Opening File" << endl;
    ofstream g("adunare.out");
    cout << "Editing File" << endl;
    int a,b;
    f >> a >> b;
    g << a+b <<'\n';
    cout << "a=" << a << " & b=" << b << endl;
    cout << "a+b=" << a+b << endl;
    cout << "Writing in file: " << a+b << endl;
    f.close();
    g.close();
    cout << "Closing File" << endl;
    return 0;
}

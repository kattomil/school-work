#include <iostream>

using namespace std;

/** Pseudocodul:

intreg n, suma, d;
suma <- 0
citeste n
|pentru d=1, d <= n/2 executa
| daca n%d = 0 atunci
|  |suma <- suma + d
|  |__*
|_____*

|daca suma = n atunci
|  scrie "este perfect"
|altfel
|  scrie "nu este perfect"
|_____*
*/

int main()
{
    int n=0, suma=0;
    cout << "n = ";
    cin >> n;
    cout << endl;
    for (int d=1; d <= n/2; d++) {
        if (n%d == 0) {
            suma = suma + d;
        }
    }
    if (suma == n) {
        cout << n << " este perfect";
    } else {
        cout << n << " nu este perfect";
    }
    return 0;
}

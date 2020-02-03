#include <iostream>
#include <fstream>
#include <string.h>

using namespace std;

int main() {
    ofstream g("SIR.TXT");
	char sir[4];
	char vocale[]="AEIOU";
	sir[2] = '\n';
	sir[3] = '\0';
	for (sir[0] = 'A'; sir[0] <= 'Z'; sir[0]++)
		for (sir[1] = 'A'; sir[1] <= 'Z'; sir[1]++) {
			if(!(strchr(vocale,sir[0]) && strchr(vocale,sir[1])))
				g<<sir;
		}
    g.close();
	return 0;
}

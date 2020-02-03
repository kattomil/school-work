#include <iostream>
#include <cstring>
#include <fstream>
using namespace std;
struct elev {int cnp; char nume[100], cv[100];
			 elev *dr,*st;};
elev*r=new elev;
int nrVoturi, voturiCand[100], n=1;
char candidati[100][100];
void citireCandidati() {
	ifstream g("candidati.in");
	while(g>>candidati[n])n++;
	g.close();
}
ifstream f("voturi.in");
elev* creare() {
	int x;f>>x;
	if(!x) return NULL;
	else {
		elev*p=new elev;
		p->cnp=x;
		f>>p->nume>>p->cv;
		for(int i=1;i<=n;i++)
			if(!strcmp(p->cv, candidati[i])) {
				voturiCand[i]++;
				nrVoturi++;
				break;
			}
		p->st=creare();
		p->dr=creare();
		return p;
	}
}
void statistica() {
	for(int i=1;i<n;i++)
		cout<<"Candidatul "<<candidati[i]<<" are "<<100*voturiCand[i]/nrVoturi<<"% din voturi."<<endl;
}
int main() {
	citireCandidati();
	r=creare();
	statistica();
	f.close();
	system("pause");
}
//facut in visual studio code nu in codeblocks
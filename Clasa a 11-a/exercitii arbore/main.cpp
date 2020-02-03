#include <iostream>
#include <fstream>
using namespace std;
ifstream f("g.in");
struct nod {int data; nod* s; nod* d;};
nod *r= new nod;
int mi,ma,su;
nod* creare() {
    int x;
    f>>x;
    if(!x)
        return NULL;
    else {
        nod *p=new nod;
        p->data=x;
        p->s=creare();
        p->d=creare();
        return p;
    }
}
void minMaxSum(nod* i) {
    if (i!=NULL) {
        mi=min(mi, i->data);
        ma=max(ma, i->data);
        su+=i->data;
        minMaxSum(i->s);
        minMaxSum(i->d);
    }
}
void nivelArb(nod*i, int nivel, int x) {
    if (i!=NULL) {
        if(nivel==x) cout<<i->data<<' ';
        nivelArb(i->s, nivel+1, x);
        nivelArb(i->d, nivel+1, x);
    }
}
void terminale(nod*i) {
    if (i!=NULL) {
        if(i->s==NULL && i->d==NULL) cout << i->data<<' ';
        terminale(i->s);
        terminale(i->d);
    }
}
namespace faraGlobale {
    void minMaxSum(nod *i, int &mi, int &ma, int &su) {
        if (i!=NULL) {
            ma=max(ma, i->data);
            mi=min(mi, i->data);
            su+=i->data;
            minMaxSum(i->s,mi,ma,su);
            minMaxSum(i->d,mi,ma,su);
        }
    }
    /**
    apelare
    int main() {
        int mi=r->data, ma=r->data, su=0;
        minMaxSum(r,mi,ma,su);
        cout<<"Nodul minim: "<<mi<<endl;
        cout<<"Nodul maxim: "<<ma<<endl;
        cout<<"Suma nodurilor: "<<su<<endl;
        return 0;
    }
    */
}
int main()
{
    r=creare();
    mi=r->data;ma=r->data;
    minMaxSum(r);
    cout<<"Nodul minim: "<<mi<<endl;
    cout<<"Nodul maxim: "<<ma<<endl;
    cout<<"Suma nodurilor: "<<su<<endl;
    int x;
    cout<<"Nivelul arborilor doriti: ";cin>>x;
    cout<<"Arborii sunt: ";nivelArb(r,0,x);cout<<endl;
    cout<<"Nodurile terminale sunt: ";terminale(r);
    return 0;
}

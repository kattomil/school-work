#include <iostream>

using namespace std;

int iterativ() {
    int x;
    cin >> x;
    while (x!=0) {
        if (x%3==0) return 1;
        cin >> x;
    }
    return 0;
}

int recursiv() {
    int x;
    cin >> x;
    if (x==0) return 0;
    else if (x%3==0) return 1;
    else return recursiv();
}

int minimIt() {
    int x, minim;
    cin >> x;
    minim=x;
    while (x>0 && x<=1000) {
        if (x<minim) minim=x;
        //else if (x<=0 || x>1000) return 0;
        cin >> x;
    }
    return minim;
}

int maximIt() {
    int x, maxim;
    cin >> x;
    maxim=x;
    while (x>0 && x<=1000) {
        if (x>maxim) maxim=x;
       // else if (x<=0 || x>1000) return 1001;
        cin >> x;
    }
    return maxim;
}

int maximRec() {
    int x, maxim;
    cin >> x;
    if (x<=0 || x>1000) 
        return 0;
    else
    {
        maxim=f(); 
        if (x>maxim) 
            return x;
        else 
            return maxim;
    }
}

int minimRec() {
    int x;
    cin >> x;
    if (x<=0 || x>1000) return 1001;
    else if (x<minimRec()) return x;
    else return maximRec();
}

int main()
{
    cout << maximRec() << endl;
    return 0;
}

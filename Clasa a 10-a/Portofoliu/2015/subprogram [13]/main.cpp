#include <iostream>

using namespace std;

void subperfect (int a,int b) {
    int d=2,s=0,sp[100],k=0;
    for (int i=a;i<=b;++i) {
        for (int j=0;j<=i-3;j++)
            if (i%d==0 && d!=i) {
                s+=d;
                d++;
            } else if (i%d!=0) d++;
        if (s>i) {
            sp[k]=i;
            k++;
        }
        s=0;
        d=2;
    }
    for (int i=0; i<k; ++i) cout << sp[i] << ' ';
}

int main() {
    int a,b;
    cin >> a >> b;
    subperfect(a,b);
    return 0;
}

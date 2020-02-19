#include <iostream>
#include <fstream>

using namespace std;
ifstream f;
ofstream g;
int main()
{
    f.open("input.txt");//g.open("output.txt");
    long long unsigned int s,k,n; /** 0 to 18,446,744,073,709,551,615 */
    f>>s>>k>>n;
    f.close();
    for(int i=2;i<=n;i++) {
        long long unsigned int z=s,x=s,digits=0;
        while(x) {
            if(x%10!=0) z*=x%10;
            x/=10;
        };z*=8;z/=9;
        x=z;
        while(x) {digits++;x/=10;};
        while(digits<k) {z=(z*10)+9;digits++;};
        s=z%100;
    }
    g<<s;
    g.close();
    return 0;
}

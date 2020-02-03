#include <iostream>

using namespace std;

int main()
{
    struct punct {
        float x, y;
    }A, B, C;
    cin >> A.x >> A.y >> B.x >> B.y;
    C.x=(A.x+B.x)/2;
    C.y=(A.y+B.y)/2;
    cout << "C(" << C.x << ", " << C.y << ");" << endl;
    return 0;
}

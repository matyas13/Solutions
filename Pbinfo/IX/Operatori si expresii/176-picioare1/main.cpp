#include <iostream>

using namespace std;

int main()
{
    int C, P;
    cin >> C >> P;
    int y=(P-2*C)/2;
    cout << C-y << ' ' << y;
    return 0;
}

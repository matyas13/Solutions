#include <iostream>

using namespace std;

int main()
{
    int HA, HB, D;
    cin >> HA >> HB >> D;
    if(HA<HB)
        swap(HB,HA);
    cout << abs((HB*HB-HA*HA+D*D))/(2*D);
    return 0;
}

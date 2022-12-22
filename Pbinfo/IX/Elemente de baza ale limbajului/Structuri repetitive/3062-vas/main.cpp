#include <iostream>

using namespace std;

int main()
{
    int x,y,t,T=0;
    cin >> x >> t >> y;
    while(x>y)
    {
        T+=t;
        x=x-(x/4);
    }
    cout << T;
    return 0;
}

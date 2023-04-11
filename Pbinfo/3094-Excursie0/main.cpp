#include <iostream>

using namespace std;

int main()
{
    int z,pb,b,pt,t;
    cin >> z >> pb >> b >> pt >> t;
    while(z>=1 && pb!=pt)
    {
        pb+=b;
        pt+=t;
        z--;
    }
    if(pb==pt)
        cout << pb;
    else
        cout << -1;
    return 0;
}

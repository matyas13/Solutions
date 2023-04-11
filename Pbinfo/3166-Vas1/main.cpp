#include <iostream>

using namespace std;

int main()
{
    float x;
    long long t,y,i,ans=0;
    cin >> x >> t >> y >> i;
    while(x>y)
    {
        ans+=t;
        x=x-(x/i);
    }
    cout << ans;
    return 0;
}

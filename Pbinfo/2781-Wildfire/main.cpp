#include <iostream>

using namespace std;

int main()
{
    int x,y,n,m;
    cin >> x >> y >> n >> m;
    if(x>n/2)
        x=n-x+1;
    if(y>m/2)
        y=m-y+1;
    cout << n+m-(x+y)+1;
    return 0;
}

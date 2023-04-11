#include <iostream>

using namespace std;

int main()
{
    int n,x,y,val;
    cin >> n >> x >> y >> val;
    cout << n*(x-1)+y << ' ';
    if(val%n==0)
        cout << val/n << ' ' << n;
    else
        cout << val/n+1 << ' ' << val%n;
    return 0;
}

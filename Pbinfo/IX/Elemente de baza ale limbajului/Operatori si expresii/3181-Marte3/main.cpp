#include <iostream>

using namespace std;

int main()
{
    int x,y,n;
    cin >> x >> y >> n;
    cout << n/y/x << endl;
    n=n-(n/y/x)*x*y;
    cout << n/y << endl;
    cout << n%y;
    return 0;
}

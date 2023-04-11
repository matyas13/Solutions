#include <iostream>

using namespace std;

int main()
{
    int a, b, c, x, y , z;
    cin >> a >> b >> c;
    x=a*b+c;
    y=a*c+b;
    z=b*c+a;
    if(x>=y && x>=z)
        cout << x;
    else if(y>=x && y>=z)
        cout << y;
    else
        cout << z;
    return 0;
}

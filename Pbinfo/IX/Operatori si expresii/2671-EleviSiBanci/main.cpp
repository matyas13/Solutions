#include <iostream>

using namespace std;

int main()
{
    int n,m,e,b;
    cin >> n >> m >> e >> b;
    int x=n-m,k=-e-m*b,y;
    x=k/x;
    y=n*x+e;
    cout << y << '\n' << x;
    return 0;
}

#include <iostream>

using namespace std;

int main()
{
    int x, y;
    cin >> x >> y;
    (y%x==0) ? cout << y/x : cout << y/x+1;
    return 0;
}

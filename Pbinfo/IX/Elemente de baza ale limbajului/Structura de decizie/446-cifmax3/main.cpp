#include <iostream>

using namespace std;

int main()
{
    int n,x;
    cin >> n;
    x=n%10;
    n/=10;
    if(n%10>x)
        x=n%10;
    n/=10;
    (n>x) ? cout << n : cout << x;
    return 0;
}

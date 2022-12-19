#include <iostream>

using namespace std;

int main()
{
    int a,b;
    cin >> a >> b;
    long long x=1;
    while(x<=b)
    {
        cout << x << ' ';
        x*=a;
    }
    return 0;
}

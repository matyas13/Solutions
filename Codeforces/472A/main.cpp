#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    if(n%2==1)
        cout << 9 << ' ' << n-9;
    else
        cout << 8 << ' ' << n-8;
    return 0;
}

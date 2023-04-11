#include <iostream>

using namespace std;

int main()
{
    long long n;
    cin >> n;
    if(n==3)
    {
        cout << 0 << '\n' << 180;
        return 0;
    }
    cout << n*(n-3)/2 << '\n' << (n-2)*180;
    return 0;
}

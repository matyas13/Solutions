#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    while(n%10==0)
        n/=10;
    cout << n;
    return 0;
}

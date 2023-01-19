#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    n%9==0 ? cout << 9 : cout << n%9;
    return 0;
}

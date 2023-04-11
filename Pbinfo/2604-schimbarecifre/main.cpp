#include <iostream>

using namespace std;

int main()
{
    int a;
    cin >> a;
    a=a%10*10 + a/10;
    cout << a*a;
    return 0;
}

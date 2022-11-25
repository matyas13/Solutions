#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    if(a%10==0)
        cout << b/10 - a/10 +1;
    else
        cout << b/10 - a/10;
    return 0;
}

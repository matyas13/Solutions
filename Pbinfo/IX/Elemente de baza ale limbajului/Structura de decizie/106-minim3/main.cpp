#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    if(b<a)
    {
        a=a+b;
        b=a-b;
        a=a-b;
    }
    a<c ? cout << a : cout << c;
    return 0;
}

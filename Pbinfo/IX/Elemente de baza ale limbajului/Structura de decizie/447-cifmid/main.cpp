#include <iostream>

using namespace std;

int main()
{
    int a,b,c;
    cin >> a;
    c=a%10;
    a/=10;
    b=a%10;
    a/=10;
    if(a>b)
        swap(a,b);
    if(b>c)
        swap(b,c);
    if(a>b)
        swap(a,b);
    cout << b;
    return 0;
}

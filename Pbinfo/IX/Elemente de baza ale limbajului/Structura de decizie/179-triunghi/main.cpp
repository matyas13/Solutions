#include <iostream>

using namespace std;

int main()
{
    float a, b, c;
    cin >> a >> b >> c;
    if(a+b>c && b+c>a && a+c>b)
        cout << "da";
    else
        cout << "nu";
    return 0;
}

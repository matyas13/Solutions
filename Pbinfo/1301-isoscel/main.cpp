#include <iostream>

using namespace std;

int main()
{
    float a, b, c;
    cin >> a >> b >> c;
    if(a+b>c && b+c>a && a+c>b)
    {
        if((a==b && a!=c) || (a==c && a!=b) || (b==c && b!=a))
            cout << "Formeaza triunghi isoscel";
        else
            cout << "Nu formeaza triunghi isoscel";
    }
    else
        cout << "Nu formeaza triunghi";
    return 0;
}

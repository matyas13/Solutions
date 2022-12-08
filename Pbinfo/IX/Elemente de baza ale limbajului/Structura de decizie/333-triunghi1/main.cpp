#include <iostream>

using namespace std;

int main()
{
    float a, b, c;
    cin >> a >> b;
    if(a>b)
        swap(a,b);
    cin >> c;
    if(c<a)
    {
        swap(a,c);
        swap(b,c);
    }
    else if(c<b)
        swap(b,c);
    if(a+b>c && b+c>a && a+c>b)
    {
        if(a*a+b*b==c*c)
            cout << "triunghi dreptunghic";
        else if(a*a+b*b<c*c)
            cout << "triunghi obtuzunghic";
        else
            cout << "triunghi ascutitunghic";
    }
    else
        cout << "nu este triunghi";
    return 0;
}

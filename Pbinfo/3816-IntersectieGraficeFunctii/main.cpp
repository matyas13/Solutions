#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    float a,b,c,d;
    cin >> a >> b >> c >> d;
    if(a==c && b==d)
        cout << "Grafice echivalente";
    else if(a==c)
        cout << "Grafice paralele";
    else
    {
        float x=(d-b)/(a-c),y=a*x+b;
        cout << fixed << setprecision(2) << x << ' ' << y;
    }
    return 0;
}

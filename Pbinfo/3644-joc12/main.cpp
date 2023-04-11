#include <iostream>

using namespace std;

int main()
{
    long long x,y,a,b,c,d,ansx,ansy;
    cin >> x >> a >> b >> y >> c >> d;
    if(a>b)
        swap(a,b);
    if(c>d)
        swap(c,d);

    if(a%x==0)
        ansx=(b/x)-(a/x)+1;
    else
        ansx=(b/x)-(a/x);

    if(c%y==0)
        ansy=(d/y)-(c/y)+1;
    else
        ansy=(d/y)-(c/y);

    if(ansx>ansy)
        cout << "Ioana " << ansx;
    else if(ansx<ansy)
        cout << "Maria " << ansy;
    else
        cout << "Egalitate " << ansx;
    return 0;
}

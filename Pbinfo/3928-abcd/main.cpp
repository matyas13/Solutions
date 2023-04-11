#include <iostream>

using namespace std;

int main()
{
    int a,b,c,d,db=0;
    cin >> a >> b >> c >> d;
    if(a%3==0)
        db=db+ ((b/3)-(a/3)+1);
    else
        db=db+ ((b/3)-(a/3));

    if(c%3==0)
        db=db+ ((d/3)-(c/3)+1);
    else
        db=db+ ((d/3)-(c/3));
    cout << db;
    return 0;
}

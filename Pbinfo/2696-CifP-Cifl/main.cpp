#include <iostream>

using namespace std;

int main()
{
    int a,b,db=0;
    cin >> a >> b;
    if((a+b)%2==0)
    {
        if(a%2==0)
            db++;
        a/=10;
        if(a%2==0)
            db++;
        if(b%2==0)
            db++;
        b/=10;
        if(b%2==0)
            db++;
    }
    else
    {
        if(a%2==1)
            db++;
        a/=10;
        if(a%2==1)
            db++;
        if(b%2==1)
            db++;
        b/=10;
        if(b%2==1)
            db++;
    }
    cout << db;
    return 0;
}

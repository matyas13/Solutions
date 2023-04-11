#include <iostream>

using namespace std;

int main()
{
    int a,b,c,db=1;
    cin >> a >> b >> c;
    if(a!=b && a!=c && b!=c)
        db=3;
    else if((a!=c && b!=c && a==b) || (a!=b && b!=c && a==c) || (a!=b && a!=c && b==c))
        db=2;
    cout << db;
    return 0;
}

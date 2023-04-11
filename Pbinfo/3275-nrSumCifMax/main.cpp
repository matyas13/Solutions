#include <iostream>

using namespace std;

int main()
{
    int a,b,c,suma,sumb,sumc,maxi=-1;
    cin >> a >> b >> c;
    suma=a%10+a/10%10;
    if(suma>maxi)
        maxi=suma;
    sumb=b%10+b/10%10;
    if(sumb>maxi)
        maxi=sumb;
    sumc=c%10+c/10%10;
    if(sumc>maxi)
        maxi=sumc;
    if(suma==maxi)
        cout << a << ' ';
    if(sumb==maxi)
        cout << b << ' ';
    if(sumc==maxi)
        cout << c << ' ';
    return 0;
}

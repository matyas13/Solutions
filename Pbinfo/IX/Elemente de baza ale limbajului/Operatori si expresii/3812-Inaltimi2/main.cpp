#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float a,b,c,s,A;
    cin >> a >> b >> c;
    if(a+b<c || b+c<a || a+c<b)
    {
        cout << "Imposibil";
        return 0;
    }
    s=(a+b+c)/2;
    A=sqrt(s*(s-a)*(s-b)*(s-c));
    float hA,hB,hC;
    hA=(2*A)/b;
    hB=(2*A)/c;
    hC=(2*A)/a;
    int h1=hA*100,h2=hB*100,h3=hC*100;
    cout << h1/100 << '.' << h1/10%10 << h1%10 << " ";
    cout << h2/100 << '.' << h2/10%10 << h2%10 << " ";
    cout << h3/100 << '.' << h3/10%10 << h3%10;
    return 0;
}

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float a,b,c;
    cin >> a >> b >> c;
    if(a+b<c || a+c<b || b+c<a)
    {
        cout << "Imposibil";
        return 0;
    }
    float p=(a+b+c)/2,S=sqrt(p*(p-a)*(p-b)*(p-c));
    int ans=100*(S/p);
    cout << ans/100 << '.' << ans/10%10 << ans%10;
    return 0;
}

#include <iostream>

using namespace std;

int main()
{
    long long n,r,k,sum=0;
    cin >> n >> k >> r;
    cout << n/2 << endl;
    for(int i=k*(k-1)/2;i<k*(k-1)/2+k;i++)
        sum+=i;
    for(int i=r*(r-1)/2;i<r*(r-1)/2+r;i++)
        sum+=i;
    cout << sum/(r+k) << endl;
    int a=r*(r-1)/2,b=a+r-1,x=1;
    while(x<=r)
    {
        cout << a << ' ';
        x++;
        if(x<=r)
            cout << a+1 << ' ';
        x++;
        if(x<=r)
            cout << b << ' ';
        x++;
        a+=2;
        b--;
    }
    return 0;
}

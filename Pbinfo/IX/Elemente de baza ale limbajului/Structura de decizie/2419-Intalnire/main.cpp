#include <iostream>

using namespace std;

int main()
{
    int a,b,mid,ans=0;
    cin >> a >> b;
    if(b<a)
        swap(a,b);
    mid=(a+b)/2;
    int n=mid-a;
    ans=ans+(n*(n+1)/2);
    n=b-mid;
    ans=ans+(n*(n+1)/2);
    cout << ans;
    return 0;
}

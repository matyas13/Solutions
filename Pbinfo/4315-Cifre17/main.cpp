#include <iostream>

using namespace std;

int f(int n)
{
    while(n>99)
        n/=10;
    return n%10;
}

int main()
{
    int n,k,ans=0;
    cin >> n;
    k=f(n);
    while(n>0){
        if(n%10>k)
            ans++;
        n/=10;
    }
    cout << ans;
    return 0;
}

#include <iostream>

using namespace std;

int nr(int n)
{
    int ans=0;
    do
    {
        ans++;
        n/=10;
    }while(n>0);
    return ans;
}

int main()
{
    int n,k,p=1;
    cin >> n >> k;
    k=nr(n)-k;
    while(k>0){
        k--;
        p*=10;
    }
    if(n/p%10==9)
        n=n/p/10*(p*10)+n%p;
    else
        n=(n/p+1)*p+n%p;
    cout << n;
    return 0;
}

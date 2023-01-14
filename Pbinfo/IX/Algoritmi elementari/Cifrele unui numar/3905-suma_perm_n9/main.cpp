#include <iostream>

using namespace std;

int main()
{
    long long n,m,p=1,cnt=1,ans=0;
    cin >> n;
    m=n;
    while(m>9){
        cnt++;
        p*=10;
        m/=10;
    }
    for(int i=0;i<cnt;i++){
        ans+=n;
        n=n%10
    }
    return 0;
}

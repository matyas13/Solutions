#include <iostream>

using namespace std;

int sum(int x)
{
    int sum=0;
    while(x>0){
        sum+=x%10;
        x/=10;
    }
    return sum;
}

int main()
{
    long long ans=0;
    int n,x,k;
    cin >> k >> n;
    for(int i=0;i<n;i++){
        cin >> x;
        if(sum(x)%k==0)
            ans+=x;
    }
    cout << ans;
    return 0;
}

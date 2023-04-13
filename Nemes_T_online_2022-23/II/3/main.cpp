#include <iostream>

using namespace std;

int count(int gyak[],int m)
{
    int sum=0;
    for(int i=1;i<=m;i++)
        if(gyak[i]!=0)
            sum++;
    return sum;
}

int main()
{
    int n,m,k,gyak[1001]={0},sum,a[100001],le;
    cin >> n >> m >> k;
    for(int i=1;i<=n;i++)
        cin >> a[i];
    le=a[1];
    for(int i=1;i<=k;i++)
    {
        gyak[a[i]]++;
    }
    sum=count(gyak,m);
    int actsum,ans=1;
    for(int i=k+1;i<=n;i++)
    {
        gyak[le]--;
        if(a[i]!=0)
            gyak[a[i]]++;
        actsum=count(gyak,m);
        if(actsum<sum)
        {
            sum=actsum;
            ans=i-k+1;
        }
        le=a[i-k+1];
    }
    cout << ans;
    return 0;
}

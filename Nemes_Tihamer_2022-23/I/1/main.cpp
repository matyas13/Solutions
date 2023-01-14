#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int n,k,a[100001],maxind,maxi=-51;
    cin >> n >> k;
    for(int i=1;i<=n;i++)
    {
        cin >> a[i];
        if(a[i]>maxi)
        {
            maxi=a[i];
            maxind=i;
        }
    }
    int ans,kul=999,mini=999,kezd,lep;
    if(maxind>=k && maxind+k-1<=n)
    {
        kezd=maxind-k+1;
        lep=k;
    }
    else if(maxind<k)
    {
        kezd=1;
        lep=maxind;
    }
    else
    {
        kezd=maxind-k+1;
        lep=n-maxind+1;
    }

    for(int i=kezd;i<=kezd+k-1;i++)
    {
        if(a[i]<mini)
            mini=a[i];
    }
    kul=abs(mini-maxi);
    ans=kezd;
    for(int i=1;i<lep;i++)
    {
        mini=999;
        for(int j=kezd+i;j<=(kezd+i+k-1);j++)
        {
            if(a[j]<mini)
                mini=a[j];
        }
        if(abs(mini-maxi)<kul)
        {
            ans=kezd+i;
            kul=abs(mini-maxi);
        }
    }
    cout << kul << '\n' << ans;
    return 0;
}

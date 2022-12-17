#include <iostream>

using namespace std;

int n,k,len[1001],a[1001];

bool kulonbozik()
{
    for(int i=1;i<=k;i++)
        if(len[i]!=0)
            return true;
    return false;
}

int main()
{
    cin >> n >> k;
    for(int i=1;i<=k;i++)
        a[i]=-1;
    int x;
    for(int i=1;i<=n;i++)
    {
        cin >> x;
        if(a[x]==-1)
            a[x]=i;
        else
        {
            if(i-a[x]>len[x])
                len[x]=i-a[x];
            a[x]=i;
        }
    }
    if(!kulonbozik())
    {
        cout << -1;
        return 0;
    }
    int mini=len[1];
    for(int i=2;i<=k;i++)
        if(len[i]!=0 && len[i]<mini)
            mini=len[i];
    for(int i=1;i<=k;i++)
    {
        if(mini==len[i])
        {
            cout << i;
            return 0;
        }
    }
    return 0;
}

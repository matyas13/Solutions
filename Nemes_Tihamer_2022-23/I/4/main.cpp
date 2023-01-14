#include <iostream>
#include <math.h>

using namespace std;

void csere(int &x,int &y)
{
    int z=x;
    x=y;
    y=z;
}

void rendez(int a[],int n)
{
    int vege=n-1,segedcsere=0;
    while (segedcsere!=-1)
    {
        segedcsere=-1;
        for (int i=0;i<vege;i++)
        {
            if (a[i+1]<a[i])
            {
                swap(a[i],a[i+1]);
                segedcsere=i;
            }
        }
        vege=segedcsere;
    }
}

void nullaz(int a[],int n)
{
    for(int i=1;i<=n;i++)
        a[i]=0;
}

int keres(int uj[],int ujind,int x)
{
    int e=0,v=ujind-1,koz;
    while(e<=v)
    {
        koz=(e+v)/2;
        if(uj[koz]==x)
        {
            return 1;
        }
        else if(x<uj[koz])
            v=koz-1;
        else
            e=koz+1;
    }
    return -1;
}

int main()
{
    int *a=new int[1000001];
    int *uj=new int[1000001];
    int n,k,x,ujind=0;
    cin >> n >> k;
    nullaz(a,n);
    for(int i=1;i<=n;i++)
    {
        cin >> x;
        if(a[x]==0)
        {
            a[x]=i;
        }
        else
        {
            if(abs(a[x]-i)<=k)
            {
                rendez(uj,ujind);
                int poz=keres(uj,ujind,x);
                if(poz==-1)
                    uj[ujind++]=x;
            }
            a[x]=i;
        }
    }
    cout << ujind << '\n';
    rendez(uj,ujind);
    for(int i=0;i<ujind;i++)
        cout << uj[i] << ' ';
    delete [] a;
    delete [] uj;
    return 0;
}

#include <iostream>

using namespace std;

int v[10],k,a[10];
long long ans;

void f(int lvl)
{
    long long n=0;
    for(int i=1;i<=lvl;i++){
        n=n*10+v[i];
    }
    ans+=n;
    return;
}

bool ch(int lvl)
{
    for(int i=1;i<lvl;i++)
        if(v[i]==v[lvl])
            return false;
    return true;
}

void back(int lvl)
{
    for(int i=1;i<=k;i++){
        v[lvl]=a[i];
        if(ch(lvl)){
            if(lvl==k)
                f(lvl);
            else
                back(lvl+1);
        }
    }
}

int main()
{
    long long n;
    cin >> n;
    while(n>0){
        k++;
        a[k]=n%10;
        n/=10;
    }
    v[0]=-1;
    back(1);
    cout << ans;
    return 0;
}

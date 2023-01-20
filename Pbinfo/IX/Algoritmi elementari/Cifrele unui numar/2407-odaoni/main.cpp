#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("odaoni.in");
ofstream fout("odaoni.out");

bool ch(int a[],int k)
{
    int x;
    do{
        x=k%10;
        if(a[x]==0){
            return false;
        }
        k/=10;
    }while(k>0);
    return true;
}

void solve(int n)
{
    int a[10]={0};
    int div,m=n,ans=0;
    do
    {
        a[m%10]=1;
        m/=10;
    }while(m>0);
    for(div=1;div*div<n;div++){
        if(n%div==0){
            if(ch(a,div))
                ans++;
            if(ch(a,n/div))
                ans++;
        }
    }
    if(n%div==0 && ch(a,div))
        ans++;
    fout << ans;
    return;
}

int main()
{
    int n;
    fin >> n;
    solve(n);
    fin.close();
    fout.close();
    return 0;
}

#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("numere18.in");
ofstream fout("numere18.out");

void solve1()
{
    long long ans,a,n;
    fin >> n;
    a=n*(n-1)/2+1;
    ans=(2*a+n-1)*n/2;
    fout << ans;
}

void solve2()
{
    long long cnt=1,k=1,m,n;
    fin >> n;
    m=n;
    while(m-k>0)
    {
        m-=k;
        k++;
        cnt++;
    }
    m=cnt*(cnt-1)/2+1;
    fout << cnt << ' ' << n-m+1;
}

int main()
{
    int c;
    fin >> c;
    if(c==1)
        solve1();
    else
        solve2();
    fin.close();
    fout.close();
    return 0;
}

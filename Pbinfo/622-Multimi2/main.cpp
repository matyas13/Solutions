#include <iostream>
//#include <math.h>
#include <fstream>

using namespace std;

ifstream fin("multimi2.in");
ofstream fout("multimi2.out");

int n,p1,m,p2;

void solve1()
{
    if(p1+n>p2)
    {
        int lim=p1+n;
        if(p2+m>lim)
            lim=p2+m;
        for(int i=p1;i<max(p1+n,p2+m);i++)
            fout << i << ' ';
    }
    else
    {
        for(int i=p1;i<p1+n;i++)
            fout << i << ' ';
        for(int i=p2;i<p2+m;i++)
            fout << i << ' ';
    }
    return;
}

void solve2()
{
    if(p1+n<=p2)
        fout << -1;
    else
    {
        int lim=p1+n;
        if(p2+m<lim)
            lim=p2+m;
        for(int i=p2;i<min(p1+n,p2+m);i++)
            fout << i << ' ';
    }
}

int main()
{
    int p;
    fin >> p >> n >> p1 >> m >> p2;
    if(p1>p2)
    {
        swap(p1,p2);
        swap(n,m);
    }
    if(p==1)
        solve1();
    else
        solve2();
    fin.close();
    fout.close();
    return 0;
}

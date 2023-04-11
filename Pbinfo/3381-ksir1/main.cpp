#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("ksir.in");
ofstream fout("ksir.out");


int main()
{
    long long n,k=1,cnt=1;
    fin >> n;
    while(n-k>0)
    {
        n=n-k;
        k+=2;
        cnt++;
    }
    if(cnt<=n)
        fout << cnt;
    else
        fout << n;
    return 0;
}

#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("prize.in");
ofstream fout("prize.out");

int main()
{
    long long n,ans=0,x;
    fin >> n;
    for(int i=0;i<n;i++)
    {
        fin >> x;
        ans+=x;
    }
    fout << ans-n+1;
    fin.close();
    fout.close();
    return 0;
}

#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("tablita.in");
ofstream fout("tablita.out");

int main()
{
    int n,ans=1;
    fin >> n;
    while(n-ans>0)
    {
        n-=ans;
        ans++;
    }
    fout << ans;
    fin.close();
    fout.close();
    return 0;
}

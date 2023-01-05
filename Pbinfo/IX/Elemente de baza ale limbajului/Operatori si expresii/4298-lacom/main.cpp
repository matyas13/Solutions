#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("lacom.in");
ofstream fout("lacom.out");

int main()
{
    long long ans=0,n,x,m;
    fin >> n >> ans;
    m=ans;
    for(int i=1;i<n;i++)
    {
        fin >> x;
        if(x>m)
        {
            ans+=x;
            m=x;
        }
    }
    fout << ans;
    fin.close();
    fout.close();
    return 0;
}

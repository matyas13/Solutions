#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream fin("coada2.in");
    ofstream fout("coada2.out");
    long long x,y,z;
    fin >> x >> y >> z;
    if(y<x+1 || z<x+1)
    {
        fout << -1;
        return 0;
    }
    long long ans=y+(z-x);
    fout << ans;
    fin.close();
    fout.close();
    return 0;
}

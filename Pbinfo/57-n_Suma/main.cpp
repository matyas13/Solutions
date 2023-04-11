#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("n_suma.in");
ofstream fout("n_suma.out");

int main()
{
    int n,ans=0,x;
    fin >> n;
    for(int i=0;i<n;i++){
        fin >> x;
        ans+=x;
    }
    fout << ans;
    fin.close();
    fout.close();
    return 0;
}

#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("sirmaxim.in");
ofstream fout("sirmaxim.out");

int main()
{
    int n,x,ans=0,maxi=-1;
    fin >> n;
    for(int i=0;i<n/2;i++){
        fin >> x;
        if(x>maxi)
            maxi=x;
    }
    for(int i=0;i<n/2;i++){
        fin >> x;
        if(x==maxi)
            ans++;
    }
    fout << ans;
    fin.close();
    fout.close();
    return 0;
}

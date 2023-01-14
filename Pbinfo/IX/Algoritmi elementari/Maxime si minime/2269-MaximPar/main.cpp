#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("maximpar.in");
ofstream fout("maximpar.out");

int main()
{
    long long n,x,maxi=-1,cnt=0;
    fin >> n;
    for(int i=0;i<n;i++){
        fin >> x;
        if(x>maxi && x%2==0){
            maxi=x;
            cnt=1;
        }
        else if(x==maxi)
            cnt++;
    }
    if(maxi==-1)
        fout << -1;
    else
        fout << maxi << ' ' << cnt;
    fin.close();
    fout.close();
    return 0;
}

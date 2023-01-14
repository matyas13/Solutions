#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("munti.in");
ofstream fout("munti.out");

int main()
{
    long long n,x,sum=0;
    fin >> n;
    for(int i=0;i<n;i++){
        fin >> x;
        sum+=x;
    }
    if(sum%n==0)
        fout << n;
    else
        fout << n-1;
    fin.close();
    fout.close();
    return 0;
}

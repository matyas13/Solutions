#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("pc.in");
ofstream fout("pc.out");

int main()
{
    long long n,x;
    fin >> n;
    for(int i=0;i<n;i++)
    {
        fin >> x;
        if((x+1)%2==0)
            fout << 1 << ' ';
        else
            fout << 0 << ' ';
    }
    fin.close();
    fout.close();
    return 0;
}

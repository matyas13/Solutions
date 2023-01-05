#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("comori1.in");
ofstream fout("comori1.out");

int main()
{
    int n,x,y;
    fin >> n >> x;
    bool cond=false;
    for(int i=1;i<n;i++)
    {
        fin >> y;
        if(y<x)
        {
            fout << i+1 << ' ';
            cond=true;
        }

        x=y;
    }
    if(!cond)
        fout << 0;
    fin.close();
    fout.close();
    return 0;
}

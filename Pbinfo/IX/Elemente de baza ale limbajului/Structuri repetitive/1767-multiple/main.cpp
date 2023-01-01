#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("multiple.in");
ofstream fout("multiple.out");

int main()
{
    int T,n,k;
    fin >> T;
    for(int i=0;i<T;i++)
    {
        fin >> n >> k;
        fout << n/k*k+k << endl;
    }
    fin.close();
    fout.close();
    return 0;
}

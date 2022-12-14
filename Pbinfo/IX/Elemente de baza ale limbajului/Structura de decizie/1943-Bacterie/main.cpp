#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream fin("bacterie.in");
    ofstream fout("bacterie.out");
    long long n,m;
    fin >> n >> m;
    if(n>m)
        swap(n,m);
    fout << n*m-(n*(n+1)/2);
    fin.close();
    fout.close();
    return 0;
}

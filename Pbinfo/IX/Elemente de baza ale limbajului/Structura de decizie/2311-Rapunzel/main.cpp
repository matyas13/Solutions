#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream fin("rapunzel.in");
    ofstream fout("rapunzel.out");
    long long n,a,b;
    fin >> n >> a >> b;
    a=a+b;
    if(n%a==0)
        fout << n/a;
    else
        fout << n/a+1;
    fin.close();
    fout.close();
    return 0;
}

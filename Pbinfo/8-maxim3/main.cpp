#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream fin("maxim3.in");
    ofstream fout("maxim3.out");
    int a,maxi;
    fin >> maxi >> a;
    if(a>maxi)
        maxi=a;
    fin >> a;
    if(a>maxi)
        maxi=a;
    fout << maxi;
    fin.close();
    fout.close();
    return 0;
}

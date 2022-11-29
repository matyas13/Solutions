#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream fin("2lan.in");
    ofstream fout("2lan.out");
    int n;
    fin >> n;
    if(n==0)
        fout << 1;
    else if(n%4==1)
        fout << 2;
    else if(n%4==2)
        fout << 4;
    else if(n%4==3)
        fout << 8;
    else
        fout << 6;
    fin.close();
    fout.close();
    return 0;
}

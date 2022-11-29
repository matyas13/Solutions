#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream fin("9lan.in");
    ofstream fout("9lan.out");
    int n;
    fin >> n;
    if(n%2==0)
        fout << 1;
    else
        fout << 9;
    fin.close();
    fout.close();
    return 0;
}

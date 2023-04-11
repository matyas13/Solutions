#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream fin("maxim.in");
    ofstream fout("maxim.out");
    int a, b;
    fin >> a >> b;
    (a>b) ? fout << a : fout << b;
    fin.close();
    fout.close();
    return 0;
}

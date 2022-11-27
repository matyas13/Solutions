#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream fin("zmeu.in");
    ofstream fout("zmeu.out");
    long long N,M;
    fin >> N >> M;
    fout << N/(2*M) << '\n' << 2*M-(N%(2*M));
    fin.close();
    fout.close();
    return 0;
}

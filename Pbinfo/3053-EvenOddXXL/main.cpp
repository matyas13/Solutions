#include <iostream>
#include <string>
#include <fstream>

using namespace std;

ifstream fin("evenoddxxl.in");
ofstream fout("evenoddxxl.out");

int main()
{
    string s;
    fin >> s;
    int n=s[s.size()-1]-'0';
    (n&1) ? fout << "Impar" : fout << "Par";
    fin.close();
    fout.close();
    return 0;
}

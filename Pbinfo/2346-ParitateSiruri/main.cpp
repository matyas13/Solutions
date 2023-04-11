#include <iostream>
#include <fstream>
#include <string>

using namespace std;

ifstream fin("paritatesiruri.in");
ofstream fout("paritatesiruri.out");

int main()
{
    string x,s1,s2;
    int n;
    fin >> n;
    for(int i=0;i<n;i++){
        fin >> x;
        s2="";
        s1="";
        for(int j=1;j<x.size();j+=2)
            s1.push_back(x[j]);
        for(int j=0;j<x.size();j+=2)
            s2.push_back(x[j]);
        fout  << s1 << ' ' << s2 << '\n';
    }
    fin.close();
    fout.close();
    return 0;
}

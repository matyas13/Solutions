#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

ifstream fin("lungimerandmax.in");
ofstream fout("lungimerandmax.out");

int main()
{
    string s;
    int l,k=0;
    fin >> l;
    while(fin>>s){
        if(k+s.size()<=l){
            fout << s << ' ';
            k=k+s.size()+1;
        }
        else{
            fout << '\n' << s << ' ';
            k=s.size()+1;
        }
    }
    fin.close();
    fout.close();
    return 0;
}

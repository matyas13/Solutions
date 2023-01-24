#include <iostream>
#include <fstream>
#include <string>

using namespace std;

ifstream fin("prosir.in");
ofstream fout("prosir.out");

int main()
{
    string s;
    getline(fin,s);
    for(int i=0;i<s.size()-1;i++){
        if(islower(s[i]) && s[i+1]==' ')
            s[i]='5';
    }
    s[s.size()-2]='5';
    fout << s;
    fin.close();
    fout.close();
    return 0;
}

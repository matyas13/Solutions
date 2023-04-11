#include <iostream>
#include <fstream>
#include <string>

using namespace std;

ifstream fin("capslock.in");
ofstream fout("capslock.out");

int main()
{
    string s;
    getline(fin,s);
    bool ch=false;
    for(int i=0; i<s.size(); i++){
        if(s[i]=='#'){
            if(ch)
                ch=false;
            else
                ch=true;
        }
        else if(isalpha(s[i])){
            if(ch)
                fout << (char)toupper(s[i]);
            else
                fout << (char)tolower(s[i]);
        }
        else
            fout << ' ';
    }
    fin.close();
    fout.close();
    return 0;
}

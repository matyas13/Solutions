#include <iostream>
#include <fstream>
#include <string>
#include <cstring>

using namespace std;

ifstream fin("doarvocale.in");
ofstream fout("doarvocale.out");

bool dvoc(string s)
{
    for(int i=0;i<s.size();i++){
        if(strchr("aeiou",s[i])==NULL)
            return false;
    }
    return true;
}

int main()
{
    int n,ans=0;
    string s;
    fin >> n;
    for(int i=0;i<n;i++){
        fin >> s;
        if(dvoc(s))
            ans++;
    }
    fout << ans;
    fin.close();
    fout.close();
    return 0;
}

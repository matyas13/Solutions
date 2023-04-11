#include <iostream>
#include <fstream>
#include <string>
#include <cstring>

using namespace std;

ifstream fin("vocmax.in");
ofstream fout("vocmax.out");

int main()
{
    int n,cnt,cntmax=-1;
    fin >> n;
    fin.get();
    string s,smax;
    char voc[]="aeiou";
    for(int i=0;i<n;i++){
        getline(fin,s);
        cnt=0;
        for(int i=s.size()-1;i>=0;i--){
            if(strchr(voc,s[i])!=NULL)
                cnt++;
        }
        if(cnt>cntmax){
            smax=s;
            cntmax=cnt;
        }
    }
    fout << smax;
    fin.close();
    fout.close();
    return 0;
}

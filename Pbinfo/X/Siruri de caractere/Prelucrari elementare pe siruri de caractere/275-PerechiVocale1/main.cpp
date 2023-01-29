#include <iostream>
#include <fstream>
#include <string>
#include <cstring>

using namespace std;

ifstream fin("perechivocale1.in");
ofstream fout("perechivocale1.out");

int srch(string a[],string x,int k)
{
    for(int i=0;i<k;i++){
        if(a[i]==x)
            return i;
    }
    return -1;
}

int main()
{
    string s,voc,a[26];
    int cnt[26],k=0,pos;
    while(getline(fin,s)){
        for(int i=0;i<s.size()-1;i++){
            voc="";
            if(strchr("aeiou",s[i])!=NULL && strchr("aeiou",s[i+1])!=NULL){
                voc.push_back(s[i]);
                voc.push_back(s[i+1]);
                pos=srch(a,voc,k);
                if(pos==-1){
                    a[k]=voc;
                    cnt[k]=1;
                    k++;
                }
                else{
                    cnt[pos]++;
                }
            }
        }
    }
    pos=0;
    for(int i=1;i<k;i++){
        if(cnt[i]>cnt[pos])
            pos=i;
    }
    for(int i=0;i<k;i++){
        if(cnt[i]==cnt[pos])
            fout << a[i] << ' ';
    }
    fin.close();
    fout.close();
    return 0;
}

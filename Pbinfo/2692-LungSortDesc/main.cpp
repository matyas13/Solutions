#include <iostream>
#include <algorithm>
#include <cstring>
#include <string>

using namespace std;

void cts(char *p,string &x)
{
    x="";
    for(int i=0;i<strlen(p);i++){
        x.push_back(p[i]);
    }
    return;
}

int srch(string a[],string x,int k,int n)
{
    for(int i=0;i<k;i++){
        if(n>a[i].size())
            return i;
    }
    return -1;
}

int main()
{
    char s[256];
    cin.getline(s,256);
    char *p=strtok(s," ");
    string a[250],x;
    int pos,k=0;
    while(p!=NULL){
        cts(p,x);
        pos=srch(a,x,k,x.size());
        if(pos==-1){
            a[k]=x;
            k++;
        }
        else{
            for(int i=k;i>pos;i--){
                a[i]=a[i-1];
            }
            a[pos]=x;
            k++;
        }
        p=strtok(NULL," ");
    }
    string m[250];
    int r,L,j=0;
    while(j<k){
        r=0;
        L=a[j].size();
        while(j<k && L==a[j].size()){
            m[r]=a[j];
            r++;
            j++;
        }
        sort(m,m+r);
        for(int i=0;i<r;i++){
            cout << m[i] << endl;
        }
    }
    return 0;
}

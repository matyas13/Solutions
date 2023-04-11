#include <iostream>
#include <string>
#include <cstring>

using namespace std;

void con(char *p,string &s)
{
    s="";
    for(int i=0;i<strlen(p);i++){
        s.push_back(p[i]);
    }
    return;
}

int srch(string x[],string s,int k)
{
    for(int i=0;i<k;i++){
        if(s<=x[i])
            return i;
    }
    return -1;
}

int bin(string x[],string s,int k)
{
    int be=0,en=k-1,mid;
    while(be<=en){
        mid=(be+en)/2;
        if(s==x[mid])
            return mid;
        else if(s<x[mid])
            en=mid-1;
        else
            be=mid+1;
    }
    return -1;
}

int main()
{
    char a[10001];
    cin.getline(a,10001);
    char *p=strtok(a,"?.,! ");
    string s,x[10001];
    int k=0,pos,cnt[10001]={0};
    while(p!=NULL){
        con(p,s);
        pos=srch(x,s,k);
        if(pos==-1){
            x[k]=s;
            cnt[k]=1;
            k++;
        }
        else{
            int found=bin(x,s,k);
            if(found!=-1)
                cnt[found]++;
            else{
                k++;
                for(int i=k;i>pos;i--){
                    x[i]=x[i-1];
                    cnt[i]=cnt[i-1];
                }
                cnt[pos]=1;
                x[pos]=s;
            }
        }
        p=strtok(NULL,"?.,! ");
    }
    for(int i=0;i<k;i++){
        cout << x[i] << ' ' << cnt[i] << endl;
    }
    return 0;
}

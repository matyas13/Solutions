#include <iostream>
#include <cstring>

using namespace std;

int count(char *p)
{
    int freq[26]={0};
    for(int i=strlen(p)-1;i>=0;i--){
        freq[p[i]-'a']++;
    }
    int cnt=0;
    for(int i=0;i<26;i++){
        if(freq[i]>1)
            return -1;
    }
    return strlen(p);
}


int main()
{
    char a[256],b[256];
    cin.getline(a,256);
    char *p=strtok(a," ");
    int maxi=0,cnt;
    while(p!=NULL){
        cnt=count(p);
        if(cnt>maxi){
            maxi=cnt;
            strcpy(b,p);
        }
        p=strtok(NULL," ");
    }
    if(maxi==0)
        cout << -1;
    else
        cout << b;
    return 0;
}

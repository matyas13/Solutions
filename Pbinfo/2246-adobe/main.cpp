#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int adobe[26]={0};

bool check(string x)
{
    int p=0,s=0,m=0,a[26]={0};
    for(int i=0;i<6;i++){
        if(x[i]=='+')
            p++;
        else if(x[i]=='-')
            m++;
        else if(x[i]=='*')
            s++;
        else
            a[x[i]-'a']++;
    }

    char k;
    for(int i=0;i<26;i++){
        if(a[i]!=adobe[i]){
            k=i+'a';
            if(strchr("aoe",k)!=NULL){
                if(m>0){
                    m--;
                }
                else if(s>0){
                    s--;
                }
                else
                    return false;
            }
            else if(strchr("db",k)!=NULL){
                if(p>0){
                    p--;
                }
                else if(s>0){
                    s--;
                }
                else
                    return false;
            }
        }
    }
    return true;
}

int main()
{
    adobe['a'-'a']=adobe['d'-'a']=adobe['o'-'a']=adobe['b'-'a']=adobe['e'-'a']=1;
    string s;
    cin >> s;
    for(int i=0;i<s.size();i++){
        s[i]=tolower(s[i]);
    }
    string s2;
    int ans=0;
    for(int i=s.size()-5;i>=0;i--){
        s2=s.substr(i,5);
        if(check(s2))
            ans++;
    }
    cout << ans;
    return 0;
}

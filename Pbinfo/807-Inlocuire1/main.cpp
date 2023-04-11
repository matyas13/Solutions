#include <iostream>
#include <string.h>
#include <string>

using namespace std;

int main()
{
    char s[256];
    cin.get(s,256);
    int i=0,j=0,n=strlen(s);
    string x="";
    while(j<n){
        while(j<n && s[j]!=' ')
            j++;
        if(j-i==3){
            x.push_back('*');
        }
        else{
            for(int k=i;k<j;k++){
                x.push_back(s[k]);
            }
        }
        while(j<n && s[j]==' '){
            x.push_back(s[j]);
            j++;
        }
        i=j;
    }
    cout << x;
    return 0;
}

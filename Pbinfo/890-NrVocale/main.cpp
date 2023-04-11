#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main()
{
    string str;
    char x,voc[]="AEIOU";
    getline(cin,str);
    int a[5]={0};
    for(int i=0; i<str.size(); i++)
    {
        if(isalpha(str[i]))
        {
            x=toupper(str[i]);
            if(x=='A')
                a[0]++;
            else if(x=='E')
                a[1]++;
            else if(x=='I')
                a[2]++;
            else if(x=='O')
                a[3]++;
            else if(x=='U')
                a[4]++;
        }
    }
    int maxi=-1;
    for(int i=0; i<5; i++){
        if(a[i]>maxi)
            maxi=a[i];
    }
    for(int i=0; i<5; i++)
    {
        if(a[i]==maxi)
            cout << voc[i] << ' ';
    }
    return 0;
}

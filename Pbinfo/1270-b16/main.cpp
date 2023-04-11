#include <iostream>
#include <string>

using namespace std;

int transform(string s)
{
    int sum=0,p=1;
    for(int i=s.size()-1;i>=0;i--){
        if(s[i]>='0' && s[i]<='9')
            sum=sum+(s[i]-'0')*p;
        else
            sum=sum+(s[i]-'A'+10)*p;
        p*=16;
    }
    return sum;
}

int main()
{
    string s;
    cin >> s;
    cout << transform(s);
    return 0;
}

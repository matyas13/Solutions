#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s,num;
    getline(cin,s);
    int i=0,x,n=s.size(),sum=0;
    while(i<n){
        if(isdigit(s[i])){
            num="";
            num.push_back(s[i]);
            i++;
            while(isdigit(s[i]) && i<n){
                num.push_back(s[i]);
                i++;
            }
            x=stoi(num);
            sum+=x;
        }
        else
            i++;
    }
    cout << sum;
    return 0;
}

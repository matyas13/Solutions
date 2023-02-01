#include <iostream>
#include <string>

using namespace std;

int f(int x)
{
    int fx=0;
    do
    {
        fx=fx*10+x%10;
        x/=10;
    }while(x!=0);
    return fx;
}

bool palindrom(int x)
{
    return x==f(x);
}

int main()
{
    string s, s2;
    int n, cnt=0;
    cin >> n;
    bool check;
    for(int i=0;i<n;i++){
        cin >> s;
        s2.clear();
        check=false;
        for(int j=0;j<s.size();j++){
            if((s[j]-'0')%2==0){
                s2.push_back(s[j]);
                check=true;
            }
        }
        if(check && palindrom(stoi(s2)))
            cnt++;
    }
    cout << cnt;
    return 0;
}

#include <iostream>

using namespace std;

long long f(long long x)
{
    long long fx=0;
    while(x>0){
        fx=fx*10+x%10;
        x/=10;
    }
    return fx;
}

bool palindrom(long long x)
{
    return x==f(x);
}

int main()
{
    int cnt;
    long long maxi=-1,x;
    cin >> x;
    while(x!=0){
        if(palindrom(x) && x>maxi){
            maxi=x;
            cnt=1;
        }
        else if(palindrom(x) && x==maxi){
            cnt++;
        }
        cin >> x;
    }
    if(maxi==-1)
        cout << "NU EXISTA";
    else
        cout << maxi << ' ' << cnt;
    return 0;
}

#include <iostream>

using namespace std;

int main()
{
    int n,maxi=-1,cnt=0;
    cin >> n;
    do
    {
        if(n%10>maxi){
            cnt=1;
            maxi=n%10;
        }
        else if(n%10==maxi)
            cnt++;
        n/=10;
    }while(n>0);
    cout << maxi << ' ' << cnt;
    return 0;
}

#include <iostream>

using namespace std;

int main()
{
    int n,s1=0,s2=0,cnt=0;
    cin >> n;
    while(n>0){
        if(cnt%2==0)
            s2+=n%10;
        else
            s1+=n%10;
        cnt++;
        n/=10;
    }
    if(cnt%2==0)
        cout << s1;
    else
        cout << s2;
    return 0;
}

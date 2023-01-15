#include <iostream>

using namespace std;

int first(int n)
{
    while(n>9)
        n/=10;
    return n;
}

int main()
{
    int n,cnt=0,p;
    cin >> n;
    p=first(n);
    while(n>0){
        if(n%10<p)
            cnt++;
        n/=10;
    }
    cout << cnt;
    return 0;
}

#include <iostream>

using namespace std;

int main()
{
    int n,x,mini=1000000001,maxi=-1;
    cin >> n;
    for(int i=1;i<=n;i++){
        cin >> x;
        if(i%2==0 && x>maxi)
            maxi=x;
        if(i%2==1 && x<mini && x<=99 && x>=10)
            mini=x;
    }
    cout << maxi << ' ';
    if(mini==1000000001)
        cout << -1;
    else
        cout << mini;
    return 0;
}

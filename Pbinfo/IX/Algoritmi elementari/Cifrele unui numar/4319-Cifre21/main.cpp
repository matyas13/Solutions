#include <iostream>

using namespace std;

bool ch(int x)
{
    do
    {
        if(x%10==0)
            return true;
        x/=10;
    }while(x>0);
    return false;
}

int main()
{
    int n,ans=0,x;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> x;
        if(ch(x))
            ans++;
    }
    cout << ans;
    return 0;
}

#include <iostream>

using namespace std;

int main()
{
    int n,x,ans=-1;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        cin >> x;
        if(x%2==0)
            ans=x;
    }
    if(ans==-1)
        cout << "IMPOSIBIL";
    else
        cout << ans;
    return 0;
}

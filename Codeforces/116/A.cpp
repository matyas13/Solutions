#include <iostream>

using namespace std;

int main()
{
    int n, x, y, ans=-1, act=0;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> x >> y;
        act=act-x+y;
        if(act>ans)
            ans=act;
    }
    cout << ans;
    return 0;
}

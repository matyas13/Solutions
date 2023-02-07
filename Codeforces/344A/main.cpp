#include <iostream>

using namespace std;

int main()
{
    int n, x, y, ans=1;
    cin >> n >> x;
    for(int i=1; i<n; i++){
        cin >> y;
        if(x!=y)
            ans++;
        x=y;
    }
    cout << ans;
    return 0;
}

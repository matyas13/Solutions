#include <iostream>

using namespace std;

int main()
{
    int n, x, y, ans=0;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> x >> y;
        if(y-x>=2)
            ans++;
    }
    cout << ans;
    return 0;
}

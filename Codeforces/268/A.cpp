#include <iostream>

using namespace std;

int main()
{
    int n, h[100], g[100], x, y;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> x >> y;
        h[i]=x;
        g[i]=y;
    }

    int ans=0;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i!=j && h[i]==g[j])
                ans++;
        }
    }
    cout << ans;
    return 0;
}

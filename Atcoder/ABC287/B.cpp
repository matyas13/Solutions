#include <iostream>

using namespace std;

int main()
{
    int n,m,x;
    int app[1000]={0};
    bool app2[1000]={0};
    cin >> n >> m;
    for(int i=0;i<n;i++){
        cin >> x;
        app[x%1000]++;
    }
    int ans=0;
    for(int i=0;i<m;i++){
        cin >> x;
        app2[x]=true;
    }
    for(int i=0;i<=999;i++){
        if(app[i]>=1 && app2[i])
            ans+=app[i];
    }
    cout << ans;
    return 0;
}

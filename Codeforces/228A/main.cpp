#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    vector < int > v(4);
    for(int i=0; i<4; i++){
        cin >> v[i];
    }
    sort(v.begin(),v.end());
    int ans=0;
    for(int i=0; i<3; i++){
        if(v[i]==v[i+1])
            ans++;
    }
    cout << ans;
    return 0;
}

#include <iostream>
#include <string>

using namespace std;

int main()
{
    int ans=0;
    string x, y;
    cin >> x >> y;
    while(x!="0" && y!="0"){
        if(x.front()==y.front())
            ans++;
        cin >> x >> y;
    }
    cout << ans;
    return 0;
}

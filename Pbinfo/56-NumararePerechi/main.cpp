#include <iostream>

using namespace std;

int main()
{
    int ans=0,x,y;
    cin >> x;
    if(x!=0){
        cin >> y;
        if(y<0)
            y=-y;
        while(y!=0){
            if(x%10==y%10)
                ans++;
            x=y;
            cin >> y;
            if(y<0)
                y=-y;
        }
    }
    cout << ans;
    return 0;
}

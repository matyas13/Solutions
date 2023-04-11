#include <iostream>

using namespace std;

int main()
{
    int n,ans=0,x,y,z;
    cin >> n;
    if(n>1){
        cin >> x >> y;
        for(int i=2;i<n;i++){
            cin >> z;
            if(y>x && y>z)
                ans+=y;
            x=y;
            y=z;
        }
    }
    cout << ans;
    return 0;
}

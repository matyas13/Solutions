#include <iostream>

using namespace std;

int main()
{
    int n, x, pos=0, ans=0;
    cin >> n;
    for(int i=0; i<n; ++i){
        cin >> x;
        if(x>0){
            pos+=x;
        }
        else{
            if(pos==0)
                ans++;
            else
                pos--;
        }
    }
    cout << ans;
    return 0;
}

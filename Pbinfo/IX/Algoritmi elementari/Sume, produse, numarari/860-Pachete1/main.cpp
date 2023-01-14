#include <iostream>

using namespace std;

int main()
{
    int n,c,i=0,x,ans=1,sum=0;
    cin >> n >> c;
    while(i<n){
        cin >> x;
        sum+=x;
        if(sum>c){
            ans++;
            sum=x;
        }
        i++;
    }
    cout << ans;
    return 0;
}

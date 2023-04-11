#include <iostream>

using namespace std;

int main()
{
    int n,x,maxi=-1,cnt=0;
    cin >> n;
    for(int i=n/2;i>0;i--){
        cin >> x;
        if(x>maxi)
            maxi=x;
    }
    for(int i=n/2;i>0;i--){
        cin >> x;
        if(x>maxi)
            cnt++;
    }
    cout << cnt;
    return 0;
}

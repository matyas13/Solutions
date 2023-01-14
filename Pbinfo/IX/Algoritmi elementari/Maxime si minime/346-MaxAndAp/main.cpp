#include <iostream>

using namespace std;

int main()
{
    long long n,x,maxi=-1,cnt=0;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> x;
        if(x>maxi){
            maxi=x;
            cnt=1;
        }
        else if(x==maxi)
            cnt++;
    }
    cout << maxi << ' ' << cnt;
    return 0;
}

#include <iostream>

using namespace std;

int main()
{
    int n,x,maxi=-1,mini=1001;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> x;
        if(x<mini)
            mini=x;
        if(x>maxi)
            maxi=x;
    }
    cout << mini+maxi;
    return 0;
}

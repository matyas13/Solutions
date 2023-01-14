#include <iostream>

using namespace std;

int main()
{
    int n,S,x,mini=1001,pos;
    cin >> S >> n;
    for(int i=0;i<n;i++){
        cin >> x;
        if(x<mini){
            pos=i+1;
            mini=x;
        }
    }
    cout << S/mini << ' ' << pos;
    return 0;
}

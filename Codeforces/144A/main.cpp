#include <iostream>

using namespace std;

int main()
{
    int pmin, pmax, maxi=-1, mini=101, x, n;
    cin >> n;
    for(int i=1; i<=n; i++){
        cin >> x;
        if(x>maxi){
            maxi=x;
            pmax=i;
        }
        if(x<=mini){
            mini=x;
            pmin=i;
        }
    }
    if(pmax<pmin){
        cout << pmax-1+n-pmin;
    }
    else{
        cout << pmax-1+n-pmin-1;
    }
    return 0;
}

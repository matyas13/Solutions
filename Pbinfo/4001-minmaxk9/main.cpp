#include <iostream>

using namespace std;

int main()
{
    int n,pmin,pmax,k,x,mini=1000001,maxi=-1;
    cin >> k >> x;
    while(x!=0)
    {
        if(x<mini && x%10==k){
            mini=x;
            pmin=n;
        }
        if(x>maxi && x%10==k){
            maxi=x;
            pmax=n;
        }
        n++;
        cin >> x;
    }
    n--;
    if(mini==1000001 || maxi==-1){
        cout << "NU EXISTA";
        return 0;
    }
    cout << abs(pmin-pmax)+1;
    return 0;
}

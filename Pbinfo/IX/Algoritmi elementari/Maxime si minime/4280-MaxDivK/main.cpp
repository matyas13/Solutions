#include <iostream>

using namespace std;

int main()
{
    int n,maxi=-1,k,x;
    cin >> n >> k;
    for(int i=0;i<n;i++){
        cin >> x;
        if(x%k==0 && x>maxi)
            maxi=x;
    }
    if(maxi==-1)
        cout << "NU EXISTA";
    else
        cout << maxi;
    return 0;
}

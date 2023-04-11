#include <iostream>

using namespace std;

int aspar(int x)
{
    int k=0,p=1;
    while(x>0){
        if(x%2==0){
            k=k+p*(x%10);
            p*=10;
        }
        x/=10;
    }
    return k;
}

int main()
{
    int n,x,asmax=-1,nrmax=-1,k;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >>x;
        k=aspar(x);
        if(k>asmax){
            nrmax=x;
            asmax=k;
        }
        else if(k==asmax && x>nrmax)
            nrmax=x;
    }
    cout << nrmax;
    return 0;
}

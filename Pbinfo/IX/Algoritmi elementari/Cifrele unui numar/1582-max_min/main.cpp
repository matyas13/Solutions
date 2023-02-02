#include <iostream>

using namespace std;

int add(int x)
{
    int sum=0;
    while(x>0){
        sum+=x%10;
        x/=10;
    }
    return sum;
}

int main()
{
    int x,n,mini=999,nummin,maxi=-1,nummax,k;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> x;
        k=add(x);
        if(k>maxi){
            maxi=k;
            nummax=x;
        }
        if(k<mini){
            mini=k;
            nummin=x;
        }
    }
    cout << nummin << '\n' << nummax;
    return 0;
}

#include <iostream>

using namespace std;

bool echilibrat(int x)
{
    int cnt=0,p=0,k=0;
    while(x>0){
        cnt++;
        if(x%2==0)
            p++;
        else
            k++;
        x/=10;
    }
    return (cnt%2==0 && k==p);
}

int main()
{
    int a,b;
    long long sum=0;
    cin >> a >> b;
    for(int i=a;i<=b;i++){
        if(echilibrat(i))
            sum+=i;
    }
    cout << sum;
    return 0;
}

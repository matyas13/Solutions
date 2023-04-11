#include <iostream>

using namespace std;

bool echilibrat(int x)
{
    int p=0,k=0;
    while(x>0){
        if(x%2==0)
            p+=x%10;
        else
            k+=x%10;
        x/=10;
    }
    return k==p;
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

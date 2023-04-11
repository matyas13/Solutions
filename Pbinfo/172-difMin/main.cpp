#include <iostream>

using namespace std;

int main()
{
    int n,a,b,x,y,dif=2000000001,k;
    cin >> n >> x;
    for(int i=1;i<n;i++){
        cin >> y;
        k=abs(x-y);
        if(k<dif){
            a=x;
            b=y;
            dif=k;
        }
        else if(k==dif && x+y<a+b){
            a=x;
            b=y;
        }
        x=y;
    }
    cout << a << ' ' << b;
    return 0;
}

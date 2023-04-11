#include <iostream>

using namespace std;

int f(int x)
{
    int fx=0;
    while(x>0){
        fx=fx*10+x%10;
        x/=10;
    }
    return fx;
}

int main()
{
    int a,b,cnt=0;
    cin >> a >> b;
    if(a>b)
        swap(a,b);
    for(int i=a;i<=b;i++){
        if(i==f(i))
            cnt++;
    }
    cout << cnt;
    return 0;
}

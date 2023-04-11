#include <iostream>

using namespace std;

int main()
{
    int a,b,cnt=0;
    cin >> a >> b;
    while(a>0 && b>0){
        if(a%10==b%10)
            cnt++;
        a/=10;
        b/=10;
    }
    if(a+b==0){
        cout << "DA\n" << cnt;
        return 0;
    }
    cout << "NU";
    return 0;
}

#include <iostream>

using namespace std;

int main()
{
    int x,a,b;
    for(int i=1; i<=5; i++){
        for(int j=1; j<=5; j++){
            cin >> x;
            if(x==1){
                a=i;
                b=j;
                break;
            }
        }
    }
    cout << abs(a-3)+abs(b-3);
    return 0;
}

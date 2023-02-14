#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        int n, x, floor=2;
        cin >> n >> x;
        if(n<=2){
            cout << 1<< '\n';
        }
        else{
            n-=2;
            while(n>x){
                n-=x;
                floor++;
            }
            cout << floor << '\n';
        }

    }
    return 0;
}

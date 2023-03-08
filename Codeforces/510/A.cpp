#include <iostream>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    for(int i=2; i<=n; i+=2){
        for(int j=0; j<m; ++j){
            cout << '#';
        }
        cout << '\n';
        if(i%4==0){
            cout << '#';
            for(int j=1; j<m; ++j){
                cout << '.';
            }
        }
        else{
            for(int j=1; j<m; ++j){
                cout << '.';
            }
            cout << '#';
        }
        cout << '\n';
    }
    for(int j=0; j<m; ++j){
        cout << '#';
    }
    return 0;
}

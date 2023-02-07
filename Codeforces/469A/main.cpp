#include <iostream>

using namespace std;

int main()
{
    int x, n, X, Y;
    bool app[101]={0};
    cin >> n >> X;

    for(int i=0; i<X; ++i){
        cin >> x;
        app[x]=true;
    }
    cin >> Y;
    for(int i=0; i<Y; ++i){
        cin >> x;
        app[x]=true;
    }
    for(int i=1; i<=n; i++){
        if(!app[i]){
            cout << "Oh, my keyboard!";
            return 0;
        }
    }
    cout << "I become the guy.";
    return 0;
}

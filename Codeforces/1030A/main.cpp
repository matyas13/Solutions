#include <iostream>

using namespace std;

int main()
{
    int n, x;
    bool ch=true;
    cin >> n;
    while(n && ch){
        cin >> x;
        if(x==1)
            ch=false;
        n--;
    }
    if(!ch)
        cout << "HARD";
    else
        cout << "EASY";
    return 0;
}

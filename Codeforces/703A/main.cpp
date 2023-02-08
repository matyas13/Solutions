#include <iostream>

using namespace std;

int main()
{
    int n, M=0, C=0, x, y;
    cin >> n;
    for(int i=0; i<n; ++i){
        cin >> x >> y;
        if(x>y)
            M++;
        else if(x<y)
            C++;
    }
    if(M==C)
        cout << "Friendship is magic!^^";
    else if(M<C)
        cout << "Chris";
    else
        cout << "Mishka";
    return 0;
}

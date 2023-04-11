#include <iostream>

using namespace std;

int main()
{
    int maxdif=-1,dif,n,x,y,cnt;
    cin >> n >> x;
    for(int i=1;i<n;i++){
        cin >> y;
        dif=abs(x-y);
        if(dif>maxdif){
            maxdif=dif;
            cnt=1;
        }
        else if(dif==maxdif)
            cnt++;
        x=y;
    }
    cout << maxdif << ' ' << cnt;
    return 0;
}

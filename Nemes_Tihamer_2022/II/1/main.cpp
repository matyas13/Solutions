#include <iostream>

using namespace std;

int up[100001],low[100001],nup,nlow,first,le,ri,N;

int main()
{
    cin >> N >> first;
    le=-1;
    ri=100001;
    int x;
    for(int i=2;i<=N;i++)
    {
        cin >> x;
        if(x>=le && x<first)
        {
            le=x;
            low[nlow++]=i;
        }
        else if(x<=ri && x>first)
        {
            ri=x;
            up[nup++]=i;
        }
    }
    cout << nup << endl;
    for(int i=0;i<nup;i++)
    {
        cout << up[i];
        if(i!=nup-1)
            cout << ' ';
    }
    cout << endl << nlow << endl;
    for(int i=0;i<nlow;i++)
    {
        cout << low[i];
        if(i!=nlow-1)
            cout << ' ';
    }
    return 0;
}

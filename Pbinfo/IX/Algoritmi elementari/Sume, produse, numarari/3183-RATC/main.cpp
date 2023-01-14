#include <iostream>

using namespace std;

int n,x,y;

void solve1()
{
    int u=0,d=0,a,b;
    for(int i=0;i<n;i++){
        cin >> a >> b;
        u+=a;
        d+=b;
    }
    cout << u << ' ' << d << ' ' << u-d;
}

void solve2()
{
    int u=0,d=0,a,b;
    for(int i=0;i<x;i++){
        cin >> a >> b;
        u+=a;
        d+=b;
    }
    for(int i=x;i<n;i++){
        cin >> a >> b;
    }
    if(u-d<y)
        cout << "NU";
    else
        cout << "DA";
}

int main()
{
    int p;
    cin >> n >> x >> y >> p;
    if(p==1)
        solve1();
    else
        solve2();
    return 0;
}

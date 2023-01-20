#include <iostream>

using namespace std;

void f(bool a[],int x)
{
    while(x>0){
        a[x%10]=true;
        x/=10;
    }
    return;
}

bool ch(int x)
{
    bool occ1[10]={0},occ2[10]={0};
    f(occ1,x*x);
    f(occ2,x*x*x);
    for(int i=0;i<10;i++){
        if(occ1[i] && occ2[i])
            return false;
    }
    return true;
}

int main()
{
    int n;
    cin >> n;
    for(int i=1;i<n;i++){
        if(ch(i))
            cout << i << ' ';
    }
    return 0;
}

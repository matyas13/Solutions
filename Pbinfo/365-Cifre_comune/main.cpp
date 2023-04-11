#include <iostream>

using namespace std;

void f(int x,bool a[])
{
    while(x>0){
        a[x%10]=true;
        x/=10;
    }
    return;
}

int main()
{
    int a,b;
    bool occ1[10]={0},occ2[10]={0};
    cin >> a >> b;
    f(a,occ1);
    f(b,occ2);
    for(int i=0;i<10;i++)
        if(occ1[i] && occ2[i]){
            cout << "DA";
            return 0;
        }
    cout << "NU";
    return 0;
}

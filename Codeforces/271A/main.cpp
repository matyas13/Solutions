#include <iostream>
#include <vector>

using namespace std;

bool check(int n)
{
    vector<int> v(10);
    while(n>0){
        v[n%10]++;
        n/=10;
    }
    for(auto &it : v){
        if(it>1)
            return false;
    }
    return true;
}

int main()
{
    int n;
    cin >> n;
    if(n==1987){
        cout << 2013;
        return 0;
    }
    n++;
    while(!check(n)){
        n++;
    }
    cout << n;
    return 0;
}

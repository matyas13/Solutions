#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    int n,x;
    cin >> s >> n;
    for(int i=0;i<n;i++){
        cin >> x;
        if(x%2==0){
            for(int i=0;i<x;i++){
                s.push_back(s[i]);
            }
        }
        else{
            for(int i=x-1;i>=0;i--){
                s.push_back(s[i]);
            }
        }
    }
    cout << s;
    return 0;
}

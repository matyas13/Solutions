#include <iostream>

using namespace std;

int main(){
    long long s=0;
    int n, i;
    cin >> n;
    for(i=1; i*i<n; i++){
        if(n%i==0){
            if(i%2==1){
                s+=i;
            }
            if(n/i%2==1){
                s+=n/i;
            }
        }
    }   
    if(n%i==0 && i%2==1){
        s+=i;
    }
    cout << s;
    return 0;
}
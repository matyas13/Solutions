#include <iostream>

using namespace std;

long long gcd(long long a, long long b){
    return (b ? gcd(b, a%b) : a);
}

long long lcm(long long a, long long b){
    return a/gcd(a, b) * b;
}

int main(){
    long long n;
    cin >> n;
    long long S1=4*n-4;
    n-=2;
    long long S2=4*n-4;
    n-=2;
    long long S3=4*n-4;
    long long lkkt=lcm(lcm(S1, S2), S3);
    cout << lkkt/S1 << ' ' << lkkt/S2 << ' ' << lkkt/S3;
    return 0;
}

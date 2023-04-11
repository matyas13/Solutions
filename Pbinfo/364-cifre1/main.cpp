#include <iostream>
#include <string>

using namespace std;

int first(long long x)
{
    while(x>9)
        x/=10;
    return x;
}

int main()
{
    long long n,maxi=-1,nr,x,cif;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> x;
        cif=first(x);
        if(cif>maxi){
            maxi=cif;
            nr=x;
        }
        else if(cif==maxi && x>nr){
            nr=x;
        }
    }
    cout << nr;
    return 0;
}

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string a, x ("");
    int n2=0,n3=0;
    cin >> a;
    for(int i=0; i<a.size(); i+=2){
        if(a[i]=='1')
            x+="1+";
        else if(a[i]=='2')
            n2++;
        else
            n3++;
    }
    for(int i=0; i<n2; i++){
        x+="2+";
    }
    for(int i=0; i<n3; i++){
        x+="3+";
    }
    x.pop_back();
    cout << x;
    return 0;
}

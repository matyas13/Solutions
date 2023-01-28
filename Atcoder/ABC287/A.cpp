#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    int n,cnt=0;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> s;
        if(s=="For")
            cnt++;
        else
            cnt--;
    }
    if(cnt>=1)
        cout << "Yes";
    else
        cout << "No";
    return 0;
}

#include <iostream>

using namespace std;

int main()
{
    string s;
    int cnt=0, n;
    cin >> n >> s;
    for(int i=0; i<n; i++){
        if(s[i]=='D')
            cnt++;
    }
    if(n-cnt==cnt)
        cout << "Friendship";
    else if(cnt>n-cnt)
        cout << "Danik";
    else
        cout << "Anton";
    return 0;
}

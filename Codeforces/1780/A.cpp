#include <iostream>

using namespace std;

void solve()
{
    int n, a[300], even=0, odd=0;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> a[i];
        if(a[i]%2==0)
            even++;
        else
            odd++;
    }
    if(odd>=3){
        cout << "YES\n";
        odd=3;
        for(int i=0;i<n;i++){
            if(a[i]%2==1){
                if(odd>0){
                    cout << i+1 << ' ';
                    odd--;
                }
                else
                    break;
            }
        }
        cout << '\n';
    }
    else if(odd==1){
        cout << "YES\n";
        for(int i=0;i<n;i++){
            if(a[i]%2==1){
                cout << i+1 << ' ';
                break;
            }
        }
        even=2;
        for(int i=0;i<n;i++){
            if(a[i]%2==0){
                if(even>0){
                    cout << i+1 << ' ';
                    even--;
                }
                else
                    break;
            }
        }
        cout << '\n';
    }
    else if(odd==2 && n>3){
        cout << "YES\n";
        for(int i=0;i<n;i++){
            if(a[i]%2==1){
                cout << i+1 << ' ';
                break;
            }
        }
        even=2;
        for(int i=0;i<n;i++){
            if(a[i]%2==0){
                if(even>0){
                    cout << i+1 << ' ';
                    even--;
                }
                else
                    break;
            }
        }
        cout << '\n';
    }
    else
        cout << "NO\n";
    return;
}

int main()
{
    int n;
    cin >> n;
    while(n--){
        solve();
    }
    return 0;
}

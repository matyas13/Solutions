#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector < int > v(n);
    for(int &it : v){
        cin >> it;
    }

    int i=0, j=n-1, S=0, D=0;
    while(i<=j){
        if(v[i]>v[j]){
            S+=v[i];
            i++;
        }
        else{
            S+=v[j];
            j--;
        }

        if(i<=j){
            if(v[i]>v[j]){
                D+=v[i];
                i++;
            }
            else{
                D+=v[j];
                j--;
            }
        }
    }

    cout << S << ' ' << D;
    return 0;
}

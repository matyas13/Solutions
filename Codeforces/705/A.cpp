#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    cout << "I hate ";
    for(int i=1; i<n; i++){
        cout << "that ";
        if(i%2==1)
            cout << "I love ";
        else
            cout << "I hate ";
    }
    cout << "it";
    return 0;
}

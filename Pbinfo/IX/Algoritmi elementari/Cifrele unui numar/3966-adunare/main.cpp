#include <iostream>

using namespace std;

int main()
{
    long long a,b,c;
    cin >> a >> b;
    c=a+b;
    while(a>0 && b>0){
        if(a%10+b%10>9){
            cout << "Gigel nu stie! El poate cumpara " << c << " bomboane!";
            return 0;
        }
        a=a/10;
        b=b/10;
    }
    cout << "Gigel stie!";
    return 0;
}

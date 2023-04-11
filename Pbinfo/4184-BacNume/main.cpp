/*#include <iostream>
#include <cstring>

using namespace std;
*/

void FNume(char s[],char id[])
{
    char *p=strchr(s,' ');
    strcpy(id,p+1);
    strcat(id, "2022");
    return;
}

/*int main()
{
    char s[51],id[51];
    cin.getline(s,51);
    FNume(s,id);
    cout << id;
    return 0;
}*/

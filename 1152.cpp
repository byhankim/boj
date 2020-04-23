#include <iostream>
#include <string>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    string str;
    int wcount = 0;
    getline(cin, str);
    int len = str.length();
    for (int i = 0; i < len; i++)
    {
        if (str[i + 1] == ' ' || str[i + 1] == '\0') wcount++;
    }
    if (str[len - 1] == ' ') wcount--;
    cout << wcount;
    return 0;
}
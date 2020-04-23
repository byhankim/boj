#include <iostream>
#include <string>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    string word;
    int max_count = 0, cnt = 0, idx, arr[26] = { 0 };
    cin >> word;
    for (int i = 0; word[i]; i++)
    {
        if (word[i] > 96)    arr[word[i] - 'a']++;
        else    arr[word[i] - 'A']++;
    }
    for (int i = 0; i < 26; i++)
    {
        if (arr[i] > max_count)
        {
            cnt = 0;
            max_count = arr[i];
            idx = i;
            cnt++;
        }
        else if (arr[i] == max_count) cnt++;
    }
    if (cnt > 1)
    {
        cout << '?';
        return 0;
    }
    cout << (char)(idx + 'A');
    return 0;
}
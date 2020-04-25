#include <iostream>
#include <cstring>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    bool is_group_word;
    int n, idx, sum = 0;
    cin >> n;
    char word[101];
    for (int i = 0; i < n; i++)
    {
        cin >> word;
        int alpha[26] = {0};
        is_group_word = true;
        for (int j = 0, len = strlen(word); j < len; j++)
        {
            idx = word[j] - 'a';
            alpha[idx]++;
            if (j != 0 && idx != (word[j-1] - 'a') && alpha[idx] > 1)
                is_group_word = false;
        }
        if (is_group_word)  sum++;
    }
    cout << sum << '\n';
    return 0;
}
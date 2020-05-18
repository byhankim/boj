#include <iostream>
#include <string>
#include <list>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    string str;
    list<char> l;
    int N;
    cin >> str;
    for (int i = 0; str[i] != '\0'; i++)
        l.push_back(str[i]);
    cin >> N;
    list<char>::iterator it = l.end();    // cursor location
    while (N--)
    {
        char op = 0, let = 0;
        cin >> op;
        if (op == 'L' && it != l.begin()) { it--; }
        else if (op == 'D' && it != l.end()) { it++; }
        else if (op == 'B' && it != l.begin())
        {
            it = l.erase(--it);
        }
        else if (op == 'P')
        {
            cin >> let;
            l.insert(it, let);
        }
    }
    for (it = l.begin(); it != l.end(); it++)
        cout << *it;
    cout << '\n';
    return 0;
}
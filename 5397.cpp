#include <iostream>
#include <string>
#include <list>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int N, L;
    cin >> N;
    while (N--)
    {
        string str;
        list<char> l;
        cin >> str;
        L = str.size();
        list<char>::iterator it = l.begin();
        for (int i = 0; i < L; i++)
        {
            if (str[i] == '<' && it != l.begin())   --it;
            else if (str[i] == '>' && it != l.end())    ++it;
            else if (str[i] == '-' && it != l.begin())
                it = l.erase((--it));
            else if (str[i]!='>' && str[i]!='<' && str[i]!='-')
                l.insert(it, str[i]);
        }
        for (it = l.begin(); it != l.end(); it++)
            cout << *it;
        cout << '\n';
    }
    return 0;
}
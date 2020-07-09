#include <iostream>
// #include <stack>
using namespace std;

const int MX = 1000005;
int stk[MX];
int pos = -1;

// stack<int> s;

void push(int x)
{
    pos++;
    if (pos < MX) stk[pos] = x;
}

void pop()
{
    if (pos > -1)
    {
        cout << stk[pos] << '\n';
        pos--;
    }
    else cout << "-1\n";
}

void size()
{
    if (pos > -1) cout << (pos + 1) << '\n';
    else cout << "0\n";
}

void empty()
{
    if (pos == -1) cout << "1\n";
    else cout << "0\n";
}

void top()
{
    if (pos == -1) cout << "-1\n";
    else cout << stk[pos] << '\n';
}

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N;
    cin >> N;
    while (N--)
    {
        string cmd;
        cin >> cmd;
        if (cmd.compare("push") == 0)
        {
            int num;
            cin >> num;
            push(num);
        }
        else if (cmd.compare("pop") == 0) pop();
        else if (cmd.compare("size") == 0) size();
        else if (cmd.compare("empty") == 0) empty();
        else if (cmd.compare("top") == 0) top();
    }
    return 0;
}
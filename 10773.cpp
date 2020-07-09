#include <iostream>
#include <stack>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    stack<int> s;
    int N, tmp;
    cin >> N;
    while (N--)
    {
        cin >> tmp;
        if (tmp != 0) s.push(tmp);
        else s.pop();
    }
    tmp = 0;
    while(!s.empty())
    {
        tmp += s.top();
        s.pop();
    }
    cout << tmp;
    return 0;
}
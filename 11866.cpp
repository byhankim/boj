#include <iostream>
#include <list>
#include <string>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);;
    cin.tie(0);
    int N, K, size;
    cin >> N >> K;
    list<int> in;
    list<int>::iterator it = in.begin();
    for (int i = 1; i <= N; i++, it++)
        in.push_back(i);
    cout << '<';
    while (!in.empty())
    {
        size = in.size();
        for (int i = 0; i < K; i++)
        {
            it++;
            if (it == in.end()) it = in.begin();
        }
        cout << *it;
        if (in.size() > 1) cout << ", ";
        it-- = in.erase(it);
    }
    cout << '>';
    return 0;
}
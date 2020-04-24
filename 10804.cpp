#include <iostream>
#include <vector>
using namespace std;
int main(void)
{
    vector<int> v;
    int a, b, tmp, cnt = 0;
    for (int i = 0; i < 20; i++) v.push_back(i + 1);
    while (cnt++ < 10)
    {
        cin >> a >> b;
        for (int i = a - 1, k = b - 1; i < k; i++, k--)
        {
            tmp = v.at(k);
            v.at(k) = v.at(i);
            v.at(i) = tmp;
        }
    }
    for (int i = 0; i < 20; i++) cout << v.at(i) << ' ';
    return 0;
}
#include <iostream>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int x, y, w, h;
    cin >> x >> y >> w >> h;
    int l = (w - x >= x) ? x : w - x;
    int ll = (h - y >= y) ? y : h - y;
    cout << ((l > ll) ? ll : l);
    return 0;
}
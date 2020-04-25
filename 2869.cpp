#include <iostream>
#include <cmath>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int A, B, V;
    double days;
    cin >> A >> B >> V;
    days = ceil((double)(V - B) / (A - B));
    cout << (int)days;
    return 0;
}
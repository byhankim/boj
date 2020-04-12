#include <iostream>
#include <algorithm>
using namespace std;
int main(void)
{
    double avrg = 0;
    int num[5], median = 0;
    for (int i = 0; i < 5; i++)
    {
        cin >> num[i];
        avrg += num[i];
    }
    sort(num, num + 5);
    cout << avrg / 5 << "\n" << num[2];
    return (0);
}
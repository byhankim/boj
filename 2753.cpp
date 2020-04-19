#include <iostream>
using namespace std;
int    main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int year;
    cin >> year;
    cout << ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) ? 1 : 0;
    return (0);
}
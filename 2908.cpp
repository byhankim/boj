#include <iostream>
using namespace std;
void print_num_reverse(char num[3]);
int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    char a[3], b[3];
    cin >> a >> b;
    if (a[2] > b[2]) print_num_reverse(a);
    else if (a[2] < b[2]) print_num_reverse(b);
    else
    {
        if (a[1] > b[1]) print_num_reverse(a);
        else if (a[1] < b[1]) print_num_reverse(b);
        else
        {
            if (a[0] > b[0]) print_num_reverse(a);
            else print_num_reverse(b);
        }
    }
    return (0);
}

void print_num_reverse(char num[3])
{
    int i = 3;
    while (i--) cout << num[i];
}
#include <iostream>
using namespace std;

long long arr[91] = { 0 };

void fibonacci(int i, int n)
{
    if (i > n)          return;
    if (i < 1)          arr[i] = 0;
    else if (i < 3)     arr[i] = 1;
    else if (i <= n)    arr[i] = arr[i - 1] + arr[i - 2];
    fibonacci((++i), n);
}

int main()
{
    int n;
    cin >> n;
    fibonacci(0, n);
    cout << arr[n];
}

// in DP
/*#include <iostream>
using namespace std;

long long num[91] = {0};

long long fibonacci(int n)
{
    if (n < 2) return n;
    if (num[n] != 0) return num[n];
    num[n] = fibonacci(n - 1) + fibonacci(n - 2);
    return num[n];
}

int main()
{
    int n;
    cin >> n;
    cout << fibonacci(n);
}*/
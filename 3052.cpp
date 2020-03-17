#include <iostream>

int     main(void)
{
    int    count_arr[42] = { 0 };
    int     count, n;
    
    count = 0;
    for (int i = 0, n; i < 10; i++)
    {
        std::cin >> n;
        count_arr[n % 42]++;
    }
    for (int i = 0; i < 42; i++)
        if (count_arr[i]) count++;
    std::cout << count << std::endl;
    return (0);
}
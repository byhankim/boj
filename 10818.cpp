#include <iostream>

int main(void)
{
    int min, max, N;

    std::cin >> N;
    for (int i = 0, num = 0; i < N; i++)
    {
        std::cin >> num;
        if (i == 0)
        {
            min = max = num;
        }
        min = (min > num) ? num : min + 0;
        max = (max < num) ? num : max + 0;
    }
    std::cout << min << " " << max << std::endl;
    return (0);
}
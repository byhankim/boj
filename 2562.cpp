#include <iostream>

int    main(void)
{
    int num, max, i, n;
    
    max = i = n = 0;
    while (i < 9)
    {
        std::cin >> num;
        if (max < num)
        {
            max = num;
            n = i + 1;
        }
        i++;
    }
    std::cout << max << std::endl << n << std::endl;
    return (0);
}
#include <iostream>

int    main(void)
{
    int verify_num, temp;
    
    verify_num = temp = 0;
    for (int i = 0; i < 5; i++)
    {
        std::cin >> temp;
        verify_num += temp * temp;
    }
    verify_num %= 10;
    std::cout << verify_num << std::endl;
    return (0);
}
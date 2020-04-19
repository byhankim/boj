#include <iostream>

int    main(void)
{
    int A, B, i, cnt;
    
    std::cin >> cnt;
    for (i = 0; i < cnt; i++)
    {
        std::cin >> A >> B;
        std::cout << A + B << std::endl;
    }
    return (0);
}
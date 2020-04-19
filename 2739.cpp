#include <iostream>

int    main(void)
{
    int i, N;
    
    std::cin >> N;
    for(i = 1; i < 10; i++)
        std::cout << N << " * " << i << " = " << N * i << std::endl;
    return (0);
}
#include <iostream>

int    main(void)
{
    int    T, A, B, I;
    
    I = 0;
    std::cin >> T;
    while (I < T)
    {
        std::cin >> A >> B;
        std::cout << "Case #" << (I + 1) << ": " << (A + B) << std::endl;
        ++I;
    }
    return (0);
}
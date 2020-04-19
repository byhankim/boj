#include <iostream>

int    main(void)
{
    std::ios::sync_with_stdio(0);
    std::cin.tie(0);
    int cnt, n1, n2;
    
    std::cin >> cnt;
    while (cnt--)
    {
        std::cin >> n1 >> n2;
        std::cout << n1 + n2 << "\n";
    }
    return (0);
}
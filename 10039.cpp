#include <iostream>

int    main(void)
{
    int score, sum;
    
    score = sum = 0;
    for (int i = 0; i < 5; ++i)
    {
        std::cin >> score;
        if (score < 40)
            score = 40;
        sum += score;
    }
    std::cout << sum / 5 << std::endl;
    return (0);
}

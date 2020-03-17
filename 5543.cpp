#include <iostream>

int main(void)
{
    int cnt = 0, burger, drink, prices[5];

    burger = drink = 2000;
    while (cnt < 5)
    {
        std::cin >> prices[cnt];
        if (cnt < 3)
            burger = (burger > prices[cnt]) ? prices[cnt] : burger + 0;
        else
            drink = (drink > prices[cnt]) ? prices[cnt] : drink + 0;
        cnt++;
    }
    std::cout << burger + drink - 50 << std::endl;
    return (0);
}
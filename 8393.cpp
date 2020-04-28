#include <iostream>
int main(void)
{
    int N;
    std::cin >> N;
    if (N % 2 == 0) std::cout << (N + 1) * int(N / 2);
    else std::cout << (N + 1) * int(N / 2) + (1 + N) / 2;
    return 0;
}
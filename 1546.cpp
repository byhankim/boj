#include <iostream>

int main(void)
{
    int     N, M;
    float   S;

    M = 0;
    S = 0.0f;
    std::cin >> N;
    int scores[N];
    for (int i = 0; i < N; i++)
    {
        std::cin >> scores[i];
        M = (scores[i] > M) ? scores[i] : M;
    }
    for (int i = 0; i < N; i++)
        S += float(scores[i]) / M * 100;
    std::cout << float(S) / N << std::endl;
    return (0);
}
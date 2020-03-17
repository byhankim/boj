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
        S += float(scores[i]);
    }
    std::cout << (float(S) / M * 100 / N) << std::endl;
    return (0);
}
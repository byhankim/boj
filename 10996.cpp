#include <iostream>

int main(void)
{
    int     N;
    char    ch = '*';

    std::cin >> N;
    for (int i = 0, flag = 1; i < (N * 2); i++)
    {
        for (int j = 0; j < N; j++)
        {
            ch = (flag == 1) ? '*' : ' ';
            std::cout << char(ch);
            flag = -flag;
        }
        if (N % 2 == 0) flag = -flag; 
        std::cout << std::endl;
    }
    return (0);
}
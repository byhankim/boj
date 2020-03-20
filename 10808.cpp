#include <iostream>

int    main(void)
{
    int     i = 0;
    char    S[100] = { 0 }, count_arr[26] = { 0 };
    
    std::cin >> S;
    while (S[i])
    {
        count_arr[S[i] - 97]++;
        i++;
    }
    for (int n = 0; n < 26; n++)
        std::cout << int(count_arr[n]) << " ";
    std::cout << std::endl;
    return (0);
}
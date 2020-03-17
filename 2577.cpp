#include <iostream>

int    main(void)
{
    char    count_arr[10] = { 0 };
    int     A, B, C, prod;
    
    scanf("%d\n%d\n%d", &A, &B, &C);
    prod = A * B * C;
    while (prod != 0)
    {
        int i = prod % 10;
        count_arr[i]++;
        prod /= 10;
    }
    for (int i = 0; i < 10; i++)
        printf("%d\n", count_arr[i]);
    return (0);
}
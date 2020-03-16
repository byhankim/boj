#include <iostream>

int    main(void)
{
    int N;
    
    scanf("%d", &N);
    for (int i = 0, cnt = 0; i < N * 2 - 1; i++)
    {
        if (i >= N)
            cnt--;
        else
            cnt++;
        for (int j = 0 ; j < cnt; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return (0);
}
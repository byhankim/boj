#include <iostream>

int    main(void)
{
    int N;
    
    scanf("%d", &N);
    for (int i = 0, star = 1 + N * 2, blank = -1; i < N * 2 - 1; i++)
    {
        if (i >= N)
        {
            star += 2;
            blank--;
        }
        else
        {
            star -= 2;
            blank++;
        }
        for (int j = 0; j < blank; j++)
            printf(" ");
        for (int j = 0 ; j < star; j++)
            printf("*"); 
        printf("\n");
    }
    return (0);
}
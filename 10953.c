#include <stdio.h>

int    main(void)
{
    int    cnt, i, A, B;
    
    i = 0;
    scanf("%d", &cnt);
    while (i < cnt)
    {
        scanf("%d,%d", &A, &B);
        printf("%d\n", A + B);
        i++;
    }
    return (0);
}

#include <stdio.h>

int    main(void)
{
    int A, B;
    
    scanf("%d %d", &A, &B);
    if (A < 1 || B > 9)
        return (1);
    printf("%d\n", A - B);
    return (0);
}

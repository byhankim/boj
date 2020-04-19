#include <iostream>

int    main(void)
{
    int  A, B, C, mid;
    
    scanf("%d %d %d", &A, &B, &C);
    if (A > B)
    {
        if (A > C)
            mid = (B > C) ? B : C;
        else
            mid = A;
    }
    else if (B > A)
    {
        if (B > C)
            mid = (A > C) ? A : C;
        else
            mid = B;
    }
    else
        mid = A;
    printf("%d\n", mid);
    return (0);
}

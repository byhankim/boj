#include <stdio.h>

int    main(void)
{
    int A, B;
    
    scanf("%d %d", &A, &B);
    printf("%s\n", (A > B) ? ">" : ((B > A) ? "<" : "=="));
    return (0);
}

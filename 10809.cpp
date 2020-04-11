#include <iostream>

int    main(void)
{
    int    i = 0;
    int    count[26];
    char   word[100];
    
    scanf("%s", word);
    for (int i = 0; i < 26; ++i)
        count[i] = -1;
    while (word[i] != '\0')
    {
        if (count[word[i] - 97] == -1)
            count[word[i] - 97] = i;
        ++i;
    }
    for (int i = 0; i < 26; ++i)
    {
        printf("%d ", count[i]);
    }
    printf("\n");
    return (0);
}
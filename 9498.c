int    main(void)
{
    int    score;
    char   grade;
    
    scanf("%d", &score);
    if (score < 101 && score > 89)
        grade = 'A';
    else if (score > 79)
        grade = 'B';
    else if (score > 69)
        grade = 'C';
    else if (score > 59)
        grade = 'D';
    else
        grade = 'F';
    printf("%c\n", grade);
    return (0);
}

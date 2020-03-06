#include <unistd.h>

int    f_strlen(char *str)
{
    char *pt;
    
    pt = str;
    while (*str)
        str++;
    return (str - pt);
}

int main(void)
{
    write(1, "강한친구 대한육군\n", f_strlen("강한친구 대한육군\n"));
    write(1, "강한친구 대한육군", f_strlen("강한친구 대한육군"));
    return (0);
}

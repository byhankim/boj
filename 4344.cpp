#include <iostream>
using namespace std;
int main(void)
{
    int N, cnt;
    double avg = 0;
    scanf("%d", &N);
    while (N--)
    {
        scanf("%d", &cnt);
        int temp, arr[cnt] = {0};
        avg = 0;
        for (int i = 0; i < cnt; i++)
        {
            scanf("%d", &temp);
            arr[i] = temp;
            avg += temp;
        }
        avg /= cnt;
        temp = 0;
        for (int i = 0; i < cnt; i++)
        {
            if ((double)arr[i] > avg)
            {temp++;}
        }
        printf("%.3lf%%\n", (double)temp / cnt * 100);
    }
    return 0;
}
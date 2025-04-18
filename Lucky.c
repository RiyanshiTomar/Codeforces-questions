#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);

    int a;
    for (int i = 1; i <= t; ++i)
    {
        scanf("%d", &a);

        int sum1 = 0, sum2 = 0;
        for (int i = 1; i <= t; ++i)
        {
            int x = a;
            int rem = a % 1000;

            while (rem > 0)
            {
                int r = rem % 10;
                sum1 = sum1 + r;
                rem = rem / 10;
            }
            int num = x / 1000;
            while (num > 0)
            {
                int r = num % 10;
                sum2 = sum2 + r;
                num = num / 10;
            }
        }
        if (sum1 == sum2)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }

    return 0;
}

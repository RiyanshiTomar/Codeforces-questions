#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 1; i <= t; ++i)
    {
        int n;
        scanf("%d", &n);
        int arr[n];
        for (int j = 0; j < n; ++j)
        {
            scanf("%d", &arr[j]);
        }
        int freq[n];
        for (int i = 0; i <= n - 1; ++i)
        {
            freq[i] = 0;
        }
        int k;
        for (k = 0; k <= n - 1; ++k)
        {
        
            if (freq[k] != -1)
            {
                int count = 1;
                for (int j = k + 1; j < n; ++j)
                {
                    if (arr[k] == arr[j])
                    {
                        freq[j] = -1;
                        count++;
                    }
                }
                freq[k] = count;
                if(freq[k] == 1){
                    printf("%d\n", k+1);
                }
            }
        }
    
    }
    return 0;
}
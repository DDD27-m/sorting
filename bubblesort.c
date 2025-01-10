#include <stdio.h>
#include <stdbool.h>
int main()
{
    int n, temp = 0;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {

        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n - 1; i++)
    {
        bool swap = false;
        for (int j = 0; j< n - 1 - i; j++)

        {
            if (arr[j] > arr[j + 1])

            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swap = true;
            }
        }
        if (!swap)
        {
            break;
        }
    }
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] > arr[i + 1])

        {
            printf("NO");
            return 0;
        }
    }
    printf("YES\n");
    for (int i = 0; i < n; i++)
    {

        printf("%d\n", arr[i]);
    }

    return 0;
}

// INSERTION SORT
#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("THE ENTERED ARRAY IS\n");
    for (int i = 0; i < n; i++)

    {
        printf("%d", arr[i]);
    }
    for (int i = 0; i < n; i++)

    {
        for (int j = 0; j < n; j++)

        {
            int key = arr[i];
            int j = i - 1;

            while (j >= 0 && arr[j] > key)
            {
                arr[j + 1] = arr[j];
                j--;
            }
            arr[j + 1] = key;
        }
    }
    printf("The sorted array is \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d", arr[i]);
    }
    return 0;
}

#include <stdio.h>
int main()
{
    int num, max, magical_number, ans = 0;
    printf("Enter the size of an array :");
    scanf("%d", &num);
    printf("Enter the magical number :");
    scanf("%d", &magical_number);

    int arr[num];
    for (int i = 0; i < num; i++)
    {
        printf("Enter the %d number :", i + 1);
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < num - 1; i++)
    {
        for (int j = 0; j < num - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int tem = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tem;
            }
        }
    }

    for (int i = 0; i < num; i++)
    {
        printf("%d\n", arr[i]);
    }

    for (int i = 0; i < num; i++)
    {
        if (magical_number == arr[i])
        {
            ans = i;
        }
        // else
        //      return 0;
    }
    printf("\nTHe index of the number is %d\n", ans);
}
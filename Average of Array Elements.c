#include <stdio.h>

int main()
{
    int arr[50], n, i;
    float sum = 0, average;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        sum = sum + arr[i];
    }

    average = sum / n;
    printf("Average = %.2f", average);

    return 0;
}

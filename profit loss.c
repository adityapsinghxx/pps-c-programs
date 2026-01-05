#include <stdio.h>

int main()
{
    float cost, sell;
    printf("Enter cost price and selling price: ");
    scanf("%f %f", &cost, &sell);

    if(sell > cost)
        printf("Profit = %.2f", sell - cost);
    else if(cost > sell)
        printf("Loss = %.2f", cost - sell);
    else
        printf("No Profit No Loss");

    return 0;
}

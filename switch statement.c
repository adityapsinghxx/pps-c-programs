#include <stdio.h>

int main()
{
    int choice;
    printf("Enter a number (1-3): ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            printf("You selected One");
            break;
        case 2:
            printf("You selected Two");
            break;
        case 3:
            printf("You selected Three");
            break;
        default:
            printf("Invalid choice");
    }

    return 0;
}

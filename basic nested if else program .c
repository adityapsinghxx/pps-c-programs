#include <stdio.h>

int main()
{
    int marks;
    printf("Enter marks: ");
    scanf("%d", &marks);

    if(marks >= 60)
    {
        printf("First Division");
    }
    else if(marks >= 40)
    {
        printf("Second Division");
    }
    else
    {
        printf("Fail");
    }

    return 0;
}

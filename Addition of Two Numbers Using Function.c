#include <stdio.h>

int add(int x, int y);   // function declaration

int main()
{
    int a, b, result;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    result = add(a, b);   // function call

    printf("Sum = %d", result);

    return 0;
}

// function definition
int add(int x, int y)
{
    int sum;
    sum = x + y;
    return sum;
}

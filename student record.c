#include <stdio.h>

struct student
{
    int roll;
    char name[20];
    float marks;
};

int main()
{
    struct student s[50];
    int i, n;

    printf("Enter number of students: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("Enter roll number: ");
        scanf("%d", &s[i].roll);

        printf("Enter name: ");
        scanf("%s", s[i].name);

        printf("Enter marks: ");
        scanf("%f", &s[i].marks);
    }

    printf("\nStudent Details:\n");
    for(i = 0; i < n; i++)
    {
        printf("%d %s %.2f\n", s[i].roll, s[i].name, s[i].marks);
    }

    return 0;
}

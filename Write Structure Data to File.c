#include <stdio.h>

struct student {
    int roll;
    char name[20];
    float marks;
};

int main() {
    FILE *fp;
    struct student s;

    fp = fopen("student.dat", "wb");

    if(fp == NULL) {
        printf("File cannot be opened");
        return 0;
    }

    printf("Enter roll number: ");
    scanf("%d", &s.roll);
    printf("Enter name: ");
    scanf("%s", s.name);
    printf("Enter marks: ");
    scanf("%f", &s.marks);

    fwrite(&s, sizeof(s), 1, fp);

    fclose(fp);
    return 0;
}

#include <stdio.h>

struct student {
    int roll;
    char name[20];
    float marks;
};

int main() {
    FILE *fp;
    struct student s;

    fp = fopen("student.dat", "rb");

    if(fp == NULL) {
        printf("File cannot be opened");
        return 0;
    }

    fread(&s, sizeof(s), 1, fp);

    printf("Roll No: %d\n", s.roll);
    printf("Name: %s\n", s.name);
    printf("Marks: %.2f\n", s.marks);

    fclose(fp);
    return 0;
}

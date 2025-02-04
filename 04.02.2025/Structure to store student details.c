#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    struct Student s;
    
    printf("Enter name: ");
    gets(s.name);
    printf("Enter roll number: ");
    scanf("%d", &s.roll);
    printf("Enter marks: ");
    scanf("%f", &s.marks);
    
    printf("\nStudent Details:\n");
    printf("Name: %s\nRoll No: %d\nMarks: %.2f\n", s.name, s.roll, s.marks);
    
    return 0;
}

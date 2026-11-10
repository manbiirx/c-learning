#include <stdio.h>
#include <string.h>
struct Student
{
    int roll;
    char name[50];
    float marks;
};

int main()
{
    struct Student s;
    FILE *fp;
    int n, i;

    fp=fopen("students.txt", "a");

    if(fp==NULL)
    {
        printf("File cannot be opened");
        return 1;
    }

    printf("Enter number of students: ");
    scanf("%d", &n);

    for(i=0;i<n;i++)
    {
        printf("\nEnter details of student %d\n", i + 1);
        printf("Enter Roll Number: ");
        scanf("%d", &s.roll);
        getchar();
        printf("Enter Name: ");
        fgets(s.name, sizeof(s.name), stdin);
        s.name[strcspn(s.name, "\n")] = '\0';
        printf("Enter Marks: ");
        scanf("%f", &s.marks);
        fprintf(fp, "%d %s %.2f\n", s.roll, s.name, s.marks);
    }
    fclose(fp);
    printf("\nStudent records saved successfully!");
    return 0;
}

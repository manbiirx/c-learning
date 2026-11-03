#include <stdio.h>

int main()
{
    FILE *fp;
    char name[50];
    fp=fopen("student.txt", "w");
    fprintf(fp, "Manbiir");
    fclose(fp);
    fp=fopen("student.txt", "r");
    fscanf(fp, "%s", name);
    printf("Data read from file: %s", name);
    fclose(fp);
    return 0;
}
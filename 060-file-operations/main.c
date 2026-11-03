#include <stdio.h>
int main()
{
    FILE *fp;
    char name[50];
    fp=fopen("student.txt", "w");
    if(fp==NULL)
    {
        printf("File cannot be opened for writing");
        return 1;
    }
    else
    {
        fprintf(fp, "Manbiir");
        fclose(fp);
    }
    fp=fopen("student.txt", "r");
    if(fp==NULL)
    {
        printf("File cannot be opened for reading");
        return 1;
    }
    else
    {
        fscanf(fp, "%s", name);
        printf("Data read from file: %s", name);
        fclose(fp);
    }
    return 0;
}
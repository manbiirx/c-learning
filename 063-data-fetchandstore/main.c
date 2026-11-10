
#include <stdio.h>
#include <string.h>
int main()
{
    FILE *fp;
    int roll,n,i;
    char name[50];
    float marks;
    fp=fopen("student.txt","w");
    if(fp==NULL)
    {
        printf("File cannot be created.");
        return 1;
    }
    printf("Enter number of students: ");
    scanf("%d",&n);
    getchar();
    for(i=0;i<n;i++)
    {
        printf("\nEnter details of student %d\n",i+1);
        printf("Enter Roll Number: ");
        scanf("%d",&roll);
        getchar();
        printf("Enter Name: ");
        fgets(name,50,stdin);
        name[strcspn(name,"\n")]='\0';
        printf("Enter Marks: ");
        scanf("%f",&marks);
        getchar();
        fprintf(fp,"%d %s %.2f\n",roll,name,marks);
    }
    fclose(fp);
    fp=fopen("student.txt","r");
    if(fp==NULL)
    {
        printf("File cannot be opened.");
        return 1;
    }
    printf("\nStudent Records\n");
    printf("----------------------\n");
    while(fscanf(fp,"%d",&roll)==1)
    {
        fscanf(fp," %49[^0-9] %f",name,&marks);
        printf("Roll Number: %d\n",roll);
        printf("Name: %s\n",name);
        printf("Marks: %.2f\n",marks);
        printf("----------------------\n");
    }
    fclose(fp);
    return 0;
}

#include <stdio.h>
int main()
{
    FILE *fp;
    char ch;
    int characters=0,spaces=0;
    fp=fopen("data.txt", "w");
    if(fp==NULL)
    {
        printf("File cannot be created");
        return 1;
    }
    printf("Enter text: ");
    while ((ch=getchar())!='\n')
    {
        fputc(ch,fp);
    }
    fclose(fp);
    fp=fopen("data.txt", "r");
    while((ch=fgetc(fp))!=EOF)
    {
        characters++;
        if (ch==' ')
        {
            spaces++;
        }
    }
    fclose(fp);
    printf("\nTotal characters = %d", characters);
    printf("\nTotal spaces = %d", spaces);
    return 0;
}
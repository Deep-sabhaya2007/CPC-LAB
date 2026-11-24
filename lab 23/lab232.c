#include <stdio.h>
void main()
{
    FILE *fp;
    char ch;
    int spaces = 0,line = 0,tebs = 0,chars = 0;
    fp = fopen("text.txt", "r");
    while (ch !=EOF)
    {
        if (ch == ' ')
        {
            spaces++;
        }
        else if (ch == '\t')
        {
            tebs++;
        }
        else if (ch == '\n')
        {
            line++;
        }
        else
        {
            chars++;
        }
        ch = fgetc(fp);
        
    }
    printf("Totel Spaces = %d \n",spaces);
    printf("Totel lines = %d \n",line);
    printf("Totel tabes = %d \n",tebs);
    printf("Totel chars = %d \n",chars);
    fclose(fp);
}
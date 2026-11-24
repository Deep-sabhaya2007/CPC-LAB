#include <stdio.h>
void main()
{
    FILE *fp;
    fp = fopen("text.txt", "w");
    printf("File created Succesfully");
    fclose(fp);
}
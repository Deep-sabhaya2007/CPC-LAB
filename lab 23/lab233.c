#include <stdio.h>
void main()
{
  FILE *fp;
  float cpi;
//   char ch[25];
  char name[25];
  int age;
   
  fp = fopen("data.txt","w+");

  fprintf(fp , "Darshan  \n 19 \n 8.5\n");

  fputc('A', fp);

  fseek(fp,0 , SEEK_SET);

  fscanf(fp, "%s %d %f",name,&age,&cpi);
  printf("Name = %s \n",name);
  printf("Age = %d \n",age);
  printf("CPI = %f \n",cpi);


fclose(fp);
}
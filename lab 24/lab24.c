// roll number, name and backlogs
#include <stdio.h>
struct student
{
    int roll;
    char name[50];
    int backlog;
};
int main()
{
    struct student s;
    FILE *fp;
    int n, i;

    fp = fopen("student.txt", "w");

    printf("Enter the number of student: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("\n Enter roll,name and backlog");
        scanf("%d %s %d", &s.roll, s.name, &s.backlog);

        fprintf(fp, "%d %s %d \n", s.roll, s.name, s.backlog);
    }
    fclose(fp);

    fp = fopen("student.txt", "r");

    printf("\n Students having more then 5 backlogs \n");
    while (fscanf(fp, "%d %s %d \n", &s.roll, s.name, &s.backlog) != EOF)
    {
        if (s.backlog > 5)
        {
            printf("Roll Number: %d \n", s.roll);
        }
    }
    fclose(fp);
    return 0;
}
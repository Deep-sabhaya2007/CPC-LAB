#include<stdio.h>
void main()
{
    int row,diff,num;
    printf("Enter the row number");
    scanf("%d",&row);

    for (int i = 0; i <= row; i++)
    {
        num=i; diff=4;
        for (int j = 0; j <= i; j++)
        {
            printf("%d",num);
            num = num + diff;
            diff --;
        }
        
    }
    
}
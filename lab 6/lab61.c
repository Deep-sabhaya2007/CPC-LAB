#include<stdio.h>
void main()

{
    float choice , x , y , add , subs , mult , div;
    // int modulo , a;

    printf("Enter 1st number: ");
    scanf("%f",&x);

    printf("Enter 2nd number: ");
    scanf("%f",&y);

    
    printf("Choose your operating system: \n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division \n");
    

    add = x+y;
    subs = x-y;
    mult = x*y;
    div = x/y;
    
//                       |
    // Like Hello world \|/
    printf("Enter your choice: ");
    scanf("%f", &choice);
   
     if (choice == 1)
    {

        printf("%f",add);
        
    }
    else if (choice == 2)
    {
        printf("%f",subs);
        
    }
    else if (choice == 3)
    {
        printf("%f",mult);
    }
    else if ( choice == 4)
    {
        printf("%.2f",div);
    }
    else
    {
        printf("Invalid choice");
    }

    // return 0;
}
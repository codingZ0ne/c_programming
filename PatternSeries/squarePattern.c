#include<stdio.h>
void main()
{
    int number = 0;
    printf("Enter the Number of Rows : ");
    scanf("%d",&number);

    for (int i = 0; i < number; i++)
    {
        for (int j = 0; j < number; j++)
        {
            printf("*");
        }
        printf("\n");
        
    }
    
}
#include<stdio.h>
void main()
{
    int i = 0, j = 0, number = 0;
    printf("Enter the number of Rows: ");
    scanf("%d",&number);

    for(i = 1; i<=number;i++){
        for(j = 1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
}
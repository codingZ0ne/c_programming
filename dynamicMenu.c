#include<stdio.h>
#include<string.h>

void main()
{
    int choice = 0, i = 0, arrayLen = 0;
    char *menuList[] ={"item-list 1", 
    "item-list 2", "item-list 3", 
    "item-list 4", "item-list 5",
    "item-list 6","EXIT"};

    while (1)
    {
        while(1){
            printf("%d. %s\n",i+1,menuList[i]);
            if (memcmp(menuList[i],"EXIT",4)==0)
            {
                break;
            }
            i++;
            
        }
        arrayLen = i;
        i = 0;
        printf("Enter Your choice : ");
        scanf("%d",&choice);
        if(choice == (arrayLen+1)){
            printf("INVALID CHOICE!!\n");
            
        }
        switch (choice)
        {
        case 1:
        printf("Item-list 1");
            break;
        
        default:
            break;
        }
    }
    
}
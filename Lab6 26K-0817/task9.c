#include <stdio.h>
int main(){
    int inventory [10],val, found = 0  ;
    
    for (int i = 0; i < 10; i++)
    {
        printf("enter the value");
        scanf("%d",&inventory[i]);
    }
    for (int i = 9; i >= 0 ; i--)
    {
        printf("%d \n",inventory[i]);
    }
    printf("enter the value");
    scanf("%d",&val);
    for (int i = 0; i < 10; i++)
    {
        if (inventory[i] == val )
        {
            found = 1;
            printf("the value found at: %d \n",i);
            break;
        }
        
        
    }
    if(found == 0){
        printf("the value does not exist");


        }
    
    

}
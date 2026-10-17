#include <stdio.h>
int main(){
    /*3 buildings = i, 4 shelves per building = j , and 5 slots per shelf =k*/
    int stock [3][4][5];
    int bstock= 0,shstock,fullest = 0;
    for(int  i = 0 ; i < 3 ; i++){
        printf("Enter for building %d \n",i + 1);
        for(int j = 0 ; j < 4 ; j++){
            printf("enter for shleve %d \n",j + 1);
            for(int k = 0 ;k < 5; k++){
                printf("enter for slot %d \n",k + 1);
                scanf("%d",&stock[i][j][k]);

            }
        }
    }
    for(int  i = 0 ; i < 3 ; i++){
        for(int j = 0 ; j < 4 ; j++){
            for(int k = 0 ;k < 5; k++){
                bstock = bstock + stock[i][j][k];
                shstock = shstock = stock[i][j][k];
                if(stock[i][j][k] < 5){
                    printf("Needs restock at building %d, shelves %d and slot %d \n",i + 1,j + 1,k +1);
            }
            if (shstock > fullest)
            {
                fullest = shstock ; 
            }
            
            }
            
        }
        printf("The stock in the building %d \n",i + 1);
    }
}
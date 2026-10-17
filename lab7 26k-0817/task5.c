#include <stdio.h>
int main(){
    int rooms[4][6],streak = 0,vacancy = 0,high = 0,start = 0 ;
    /*row = floor and column = rooms*/
    int row,col,floor;
    /*1 for occupied and 0 for vacant*/
    for(row = 0 ; row < 4 ; row++ ){
        printf("Enter details of Floor %d \n",row + 1);
        for(col = 0 ; col < 6 ; col++){
            printf("enter room no %d  vacancy \n",col + 1);
            scanf("%d",&rooms[row][col]);

        }
    }

    for(row = 0 ; row < 4 ; row++ ){
        for(col = 0 ; col < 6 ; col++){
            if(rooms[row][col] == 0){
                streak = streak +  1;
                vacancy = vacancy + 1;
            }
            else{
                streak = 0;
            }
            if(streak == 3){
                start = col - 1 ;
                floor = row ;
            }
            
        }
        if (vacancy > high){
                high = vacancy;
                floor = row + 1;

            }
        vacancy = 0 ;
        printf("The floor %d has 3 consecutive vacant rooms starting from %d \n",floor,start);
    }
    printf("The highest frequncy is at floor %d \n");
}
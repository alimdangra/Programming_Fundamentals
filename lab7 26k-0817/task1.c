#include <stdio.h>
int main(){
    int seats[5][8];
    /* 0 for empty and 1 for reserved */
    int row,col,reserve =0,empty,emptyrow ;

    for (row =0; row < 5;row++){
        for(col =0;col < 8;col++){
            if (seats[row][col] == 1){
            reserve = reserve++;
            }
            else if (seats[row][col] == 0)
            {
                empty = empty++;
                emptyrow = emptyrow;
            }
            
        }
        printf("the empty seats in the row %d %d \n",row + 1,emptyrow);
            emptyrow = 0;
    }
    printf("total empty seats %d \n",empty);
}
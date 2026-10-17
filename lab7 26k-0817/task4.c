#include <stdio.h>
int main(){
    int sales[3][5],total,row,col,high = 0 ,branchtotal =0,branch = 0,low =100000;
    for(row =0 ; row < 3 ; row++){
        printf("Enter monthly sale for branch %d \n",row + 1);
        for (col = 0 ; col < 5 ;col ++){
            printf("Enter Product %d sales accordin to the branch \n",col + 1);
            scanf("%d",&sales[row][col]);
        }
    }
    for(row =0 ; row < 3 ; row++){
        for (col = 0 ; col < 5 ;col ++){
            total =total +  sales [row][col];
            branchtotal = branchtotal + sales [row][col];
        }
        if (branchtotal > high){
            high = branchtotal ; 
            branch = row;
        }
        branchtotal = 0;
        printf("The total sale is %d \n",total);
    }
    printf("The best selling branch is %d \n",branch = 1);
    int product = 0 ;
    for (col = 0 ; col < 5 ;col ++){
        for(row =0 ; row < 3 ; row++){
            product = product + sales[col][row];
        }
        printf("The each products sale across branches %d \n",product);
        if(product < low){
            low = product;
        }
    }
    printf("The product with lowest sale is %d \n",low);

}
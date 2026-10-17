#include <stdio.h>
int main(){
    int marks [6][4];
    int row,col,total=-0;
    float avg;
    for(row =0; row < 6; row++){
        printf("enter student %d marks \n",row + 1);
        for(col = 0; col <4;col++){
            printf("Enter subject %d marks \n",col +1);
            scanf("%d",&marks[row][col]);
        }
    }
    for(row =0; row < 6; row++){
        for(col = 0; col <4;col++){
            total = total + marks[row][col];
        }
        printf("The totl marks of student %d %d \n",row + 1,total);

        avg = total/4.0;
        printf("The average marks %2f \n",avg);
        total = 0;
    }
    int subtotal =0,high =  0,num;
    float subavg;
    for(col = 0; col <4;col++){
        for(row =0; row < 6; row++){
            subtotal = subtotal + marks[row][col];
        }
        if (subtotal > high)
        {
            high = subtotal;
            num = col;
        }
        subavg = subtotal/6;
        printf("The subject avg is %2f \n",subavg);
    }
    printf("the class performed best in %d subject",num);
}
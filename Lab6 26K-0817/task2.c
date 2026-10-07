#include  <stdio.h>
int main(){
    int num,marks,total;
    float avg;
    printf("how many students are there: \n");
    scanf("%d",&num);
    for (int i= 1; i<=num; i++){
        printf("enter the marks: \n");
        scanf("%d",&marks);
        total = total +marks;
    }
    printf("the total is %d \n",total);
    avg = total/num;
    printf("the average is %f",avg);
}
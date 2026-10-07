#include <stdio.h>
int main(){
    int pin,val,check,flag;
    printf("enter the pin \n");
    scanf("%d",&pin);
    flag = 1;
    while (flag == 1){
        val = pin % 10;
        pin  = pin / 10;
        if (pin == 0){
            flag = 0 ;
        }
        check = val + check ; 
    }
    printf ("the check sum value is %d",check);
}
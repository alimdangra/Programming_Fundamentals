#include <stdio.h>
int main(){
    float grwth,dep;
    int time;
    printf("Enter the deposit amount \n");
    scanf ("%f",&dep);
    printf("Enter the growth factor \n");
    scanf ("%f",&grwth);
    printf("Enter the time as years \n");
    scanf ("%d",&time);
    for (int i = 1; i <= time;i++){
        dep  = dep * grwth;
    }
    printf("the final amount is %.2f ",dep);
}
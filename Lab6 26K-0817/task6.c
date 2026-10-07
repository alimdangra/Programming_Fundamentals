#include <stdio.h>
int main(){
    int marks;
    do {
        printf("enter the marks");
        scanf("%d",&marks);
        
    }
    while(marks < 0  || marks > 100 );
    if (marks >= 50){
            printf("pass \n");
        }
        else
        {
            printf("fail");
        }
}
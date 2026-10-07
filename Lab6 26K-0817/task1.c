#include <stdio.h>
int main(){
    int tick = 500;
    for(int i = 1; i<= 10; i++){
        printf("The show number %d \n",i);
        printf("the price is %d \n",tick);
        tick = tick + 50;
    }
}
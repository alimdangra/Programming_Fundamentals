#include <stdio.h>
int main(){
    int wlevel = 100,hrs;
    while (wlevel != 1)
    {
        if (wlevel % 2 == 0){
            wlevel = wlevel / 2 ;
        }
        else{
            wlevel = (3 *wlevel) + 1;
        }
        hrs = hrs + 1;
        printf("the water level is %d \n",wlevel);
        
    }
    printf("the total time taken is %d \n",hrs);
}
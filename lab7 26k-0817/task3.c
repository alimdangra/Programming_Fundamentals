#include <stdio.h>
int main(){
    int temp[7][4],temperature;
    int row,col;
    for(row = 0;row<7;row++){
        
        printf("enter morning, noon, evening, night temperature for day %d \n",row  +1);
        for(col = 0 ; col < 4 ; col++){
            scanf("%d",&temp[row][col]);
        }
    }
    int ntotal,hot = 0,low=100,day,timing,count;
    float navg;
    for(row = 0;row<7;row++){
        for(col = 0 ; col < 4 ; col++){
            if (col == 1){
                ntotal = ntotal + temp[row][col];
            }
            if(temp[row][col] > hot){
                hot = temp[row][col];
                timing = col;
                day = row;
            }
            if(temp[row][col] < low){
                low = temp[row][col];
                timing = col;
                day = row;
            }
        }
        navg = ntotal /7;
    }
    char part;
    for(row = 0; row<7; row++){
        if(temp[row][1] > navg){
            count++;
        }
    }
        if (timing == 0){
            part = 'M';
        }
        else if ( timing == 1){
            part = 'N';
        }
        else if (timing == 2){
            part = 'E';
        }
        else if (timing == 3){
            part = 'N';
        }
    printf("M for morning, N for noon, E for evening, N for night");
    printf("The hotest temperature is %d and the day is %d and the timing is  %C \n",hot,day,part);
    printf("Number of days whose non=on temp was above average %d \n",count);
        
}
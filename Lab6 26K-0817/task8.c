#include <stdio.h>
int main()
{
    int high = 0 ,low = 100,sechigh = 0 ,wthr=0;
    int weather[8];
    for(int i = 0; i <8 ; i++){
        printf("enter the weather");
        scanf("%d",&weather[i]);
    }
    for (int x = 0 ; x < 8; x ++){
        if(weather[x] > high){
            sechigh = high;
            high = weather[x];
            /*high = high + 1 ;*/
        }
        else if (weather[x] > sechigh ){
            sechigh = weather[x];

        }
        if (weather[x] < low){
            low = weather[x];
        }
        
    }
    printf("%d \n",low);
    printf("%d \n",high);
    printf("%d \n",sechigh);
}

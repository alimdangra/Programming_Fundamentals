#include <stdio.h>
int main(){
    /*3 departments =i, 4 students per department=j, and 5 subjects each=k*/
    int marks[3][4][5];
    int stdtotal,topper = 0,deptotal = 0,high = 0;
    float stdavg,depavg;
    for(int i = 0; i < 3; i++){
        printf("enter department %d marks \n",i + 1);
        for(int j = 0 ; j < 4 ; j++){
            printf("enter student %d marks \n",j +1);
            for (int k =0 ; k< 5 ; k++){
                printf("enter subject %d marks \n",k +1);
                scanf("%d",&marks[i][j][k]);

            }
        }
    }
    for(int i = 0; i < 3; i++){
        for(int j = 0 ; j < 4 ; j++){
            for (int k =0 ; k< 5 ; k++){
                if(marks[i][j][k] < 40) {
                    printf("The sudent %d  in deparment %d failed in subject %d \n",j,i,k);
                }
                stdtotal = stdtotal + marks[i][j][k];
                deptotal = deptotal + marks[i][j][k];
            }
            stdavg = stdtotal/4;
            stdtotal = 0;
            printf("Student %d average is %2f \n",j +1 ,stdavg);
            if(stdtotal  > topper){
                topper = j + 1;
            }
        }
        printf("The topper is %d \n",topper);
        depavg = deptotal/4 ; 
        printf("The department %d has average of %2f",i+1,depavg);
        if (deptotal > high){
            high = i + 1;
        }
        deptotal = 0;

    }

}
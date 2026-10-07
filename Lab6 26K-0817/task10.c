#include <stdio.h>
#include <ctype.h>
int main(){
    char arr [21],chr;
    int vcount =0 , conscount =0;
    printf("enter the password");
    scanf("%20s",arr);


    for (int i = 0 ; i < 20 ; i++){
        chr = tolower(arr[i]);
        if (chr >= 'a' && chr <= 'z') {
            if (chr == 'a' || chr == 'e' || chr == 'o' ||chr == 'i' || chr == 'u'){
                vcount = vcount + 1;
            }
            else
            {
                conscount = conscount + 1;
            }
        arr[i] = toupper(arr[i]);
    }


    }
    printf("%d \n",vcount);
    printf("%d \n",conscount);
    printf("Uppercase username: %s\n", arr);
}
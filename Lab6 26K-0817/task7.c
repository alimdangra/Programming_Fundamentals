#include <stdio.h>
int main()
{ 
    int opt;
    do{
        printf("Enter 1) Add Item, 2) Remove Item, 3) View Total, 4) Checkout. \n");
        scanf("%d",&opt);
    }
    while(opt != 4);
}
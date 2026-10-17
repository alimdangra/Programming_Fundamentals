#include <stdio.h>
int main(){
    
    char board[3][3];
    for(int i =0 ; i < 3; i++){
        for(int j = 0; j < 3 ; j++){
            printf("Enter the board details in capital \n");
            scanf(" %c",&board[i][j]);
        }
    }
    for (int  i = 0; i<3; i++){
        for (int j = 0; j <3; j++)
        {
            printf(" %c",board[i][j]);
        }
        printf("\n");
        
    }
    
    if(board[0][0] == 'X' && board[0][1] == 'X' && board[0][2] == 'X'){
        printf("player 1 wins");
    }
    else if(board[0][0] == 'O' && board[0][1] == 'O' && board[0][2] == 'O'){
        printf("player 2 wins");
    }
    else if(board[0][0] == 'O' && board[1][0] == 'O' && board[2][0] == 'O'){
        printf("player 2 wins");
    }
    else if(board[0][0] == 'X' && board[1][0] == 'X' && board[2][0] == 'X'){
        printf("player 1 wins");
    }
    else if(board[0][0] == 'O' && board[1][1] == 'O' && board[2][2] == 'O'){
        printf("player 2 wins");
    }
    else if(board[0][0] == 'X' && board[1][1] == 'X' && board[2][2] == 'X'){
        printf("player 1 wins");
    }
    else if(board[0][2] == 'X' && board[1][1] == 'X' && board[2][0] == 'X'){
        printf("player 1 wins");
    }
    else if(board[0][2] == 'O' && board[1][1] == 'O' && board[2][0] == 'O'){
        printf("player 2 wins");
    }
    else{
        printf("The match is draw");
    }
}

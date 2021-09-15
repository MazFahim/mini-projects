#include <stdio.h>
#include <conio.h>
char board[10] = {'.','.','.','.','.','.','.','.','.','.'};

int main()
{
    int choice, i =-1, player =1;
    char mark;
    printf("\t\t\t\tTic Tac Toe\n\n");
    printf("\t\t\tPlayer 1-(X) --- Player 2-(O)\n\n\n");
    showBoard();
    do{
        if (player%2 ==1){
            player = 1;
            mark = 'X';
        }
        else{
            player = 2;
            mark = 'O';
        }
        printf("Player %d-Enter your choice:",player);
        scanf("%d",&choice);
        if (choice == 1 && board[1] == '.')board[1] = mark;
        else if (choice == 2 && board[2] == '.')board[2] = mark;
        else if (choice == 3 && board[3] == '.')board[3] = mark;
        else if (choice == 4 && board[4] == '.')board[4] = mark;
        else if (choice == 5 && board[5] == '.')board[5] = mark;
        else if (choice == 6 && board[6] == '.')board[6] = mark;
        else if (choice == 7 && board[7] == '.')board[7] = mark;
        else if (choice == 8 && board[8] == '.')board[8] = mark;
        else if (choice == 9 && board[9] == '.')board[9] = mark;
        else{
            printf("Invalid Move");
            player = player - 1;
        }
        showBoard();
        i = checkwin();
        if (i == 1){
            printf("Player %d has won", player);
            break;
        }
        else if (i == 0){
            printf("Match Draw");
            break;
        }
        player++;
    }while(i=-1);
}

void showBoard()
{
    printf(" %c | %c | %c\n", board[1],board[2],board[3]);
    printf("--- --- ---\n");
    printf(" %c | %c | %c\n", board[4],board[5],board[6]);
    printf("--- --- ---\n");
    printf(" %c | %c | %c\n", board[7],board[8],board[9]);
}
int checkwin()
{
    if(board[1]==board[2]&&board[3]==board[2] && board[2]!='.') return 1;
    else if(board[4]==board[5]&&board[5]==board[6] && board[5]!='.') return 1;
    else if(board[7]==board[8]&&board[8]==board[9] &&board[7]!='.') return 1;
    else if(board[1]==board[5]&&board[5]==board[9]&&board[5]!='.') return 1;
    else if(board[3]==board[5]&&board[5]==board[3]&&board[5]!='.') return 1;
    else if(board[1]==board[4]&&board[4]==board[7]&&board[4]!='.') return 1;
    else if(board[2]==board[5]&&board[5]==board[8]&&board[8]!='.') return 1;
    else if(board[3]==board[6]&&board[9]==board[6]&&board[3]!='.') return 1;
    else if (board[1]!='.'&&board[2]!='.'&&board[3]!='.'&&board[4]!='.'&&board[5]!='.'
             &&board[6]!='.'&&board[7]!='.'&&board[8]!='.'&&board[9]!='.'){
            return 0;
        }
    else
        return -1;
}

#include <stdio.h>

char board[10] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};

int checkForWin() {
    if (board[1] == board[2] && board[2] == board[3])
        return 1;
    else if (board[4] == board[5] && board[5] == board[6])
        return 1;
    else if (board[7] == board[8] && board[8] == board[9])
        return 1;
    else if (board[1] == board[4] && board[4] == board[7])
        return 1;
    else if (board[2] == board[5] && board[5] == board[8])
        return 1;
    else if (board[3] == board[6] && board[6] == board[9])
        return 1;
    else if (board[1] == board[5] && board[5] == board[9])
        return 1;
    else if (board[3] == board[5] && board[5] == board[7])
        return 1;
    else if (board[1] != '1' && board[2] != '2' && board[3] != '3'
             && board[4] != '4' && board[5] != '5' && board[6] != '6'
             && board[7] != '7' && board[8] != '8' && board[9] != '9')
        return 0;
    else
        return -1;
}

void displayBoard() {
    printf("\n");
    printf(" %c | %c | %c \n", board[1], board[2], board[3]);
    printf("---+---+---\n");
    printf(" %c | %c | %c \n", board[4], board[5], board[6]);
    printf("---+---+---\n");
    printf(" %c | %c | %c \n", board[7], board[8], board[9]);
    printf("\n");
}

int main() {
    int player = 1, i, choice;
    char mark;

    do {
        displayBoard();
        player = (player % 2) ? 1 : 2;
        printf("Player %d, nhap so o ma ban muon danh dau: ", player);
        scanf("%d", &choice);
        mark = (player == 1) ? 'X' : 'O';

        if (choice == 1 && board[1] == '1')
            board[1] = mark;
        else if (choice == 2 && board[2] == '2')
            board[2] = mark;
        else if (choice == 3 && board[3] == '3')
            board[3] = mark;
        else if (choice == 4 && board[4] == '4')
            board[4] = mark;
        else if (choice == 5 && board[5] == '5')
            board[5] = mark;
        else if (choice == 6 && board[6] == '6')
            board[6] = mark;
        else if (choice == 7 && board[7] == '7')
            board[7] = mark;
        else if (choice == 8 && board[8] == '8')
            board[8] = mark;
        else if (choice == 9 && board[9] == '9')
            board[9] = mark;
        else {
            printf("Buoc nay khong hop le!\n");
            player--;
        }
        i = checkForWin();
        player++;
    } while (i == -1);

    displayBoard();
    if (i == 1)
        printf("==>\aPlayer %d thang! ", --player);
    else
        printf("==>\aGame hoa!");

    return 0;
}
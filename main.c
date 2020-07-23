#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

char ticTacToeBox[10] = { '0', '1', '2', '3', '4', '5', '6', '7', '8', '9' }; //'0' at the beginning for convenience

int checkwin();

void board();

int main()
{
    int player = 1 , i, choice;

    char mark;
    do
    {
        board();
        player = (player % 2) ? 1 : 2 ;

        mark = (player == 1) ? 'X' : 'O' ;

        printf("Player %d, please enter a number: ", player);
        scanf("%d", &choice);

        if(choice == 1 && ticTacToeBox[1] == '1')
            ticTacToeBox[1] = mark;

        else if(choice == 2 && ticTacToeBox[2] == '2')
            ticTacToeBox[2] = mark;

        else if(choice == 3 && ticTacToeBox[3] == '3')
            ticTacToeBox[3] = mark;

        else if(choice == 4 && ticTacToeBox[4] == '4')
            ticTacToeBox[4] = mark;

        else if(choice == 5 && ticTacToeBox[5] == '5')
            ticTacToeBox[5] = mark;

        else if(choice == 6 && ticTacToeBox[6] == '6')
            ticTacToeBox[6] = mark;

        else if(choice == 7 && ticTacToeBox[7] == '7')
            ticTacToeBox[7] = mark;

        else if(choice == 8 && ticTacToeBox[8] == '8')
            ticTacToeBox[8] = mark;

        else if(choice == 9 && ticTacToeBox[9] == '9')
            ticTacToeBox[9] = mark;
        else
        {
            printf("\aInvalid entry. Please try again. ");

            player--;

            getch();

        }

        i = checkwin();

        player++;

    }while( i == -1 );

    board();

    if(i == 1)
        printf("\n\a---!!!Player %d wins!!!---", --player);
    else
        printf("\n\a---Game Draw!---");

    getch();


    return 0;
}

int checkwin()
{
    if (ticTacToeBox[1] == ticTacToeBox[2] && ticTacToeBox[2] == ticTacToeBox[3])
        return 1;

    else if (ticTacToeBox[4] == ticTacToeBox[5] && ticTacToeBox[5] == ticTacToeBox[6])
        return 1;

    else if (ticTacToeBox[7] == ticTacToeBox[8] && ticTacToeBox[8] == ticTacToeBox[9])
        return 1;

    else if (ticTacToeBox[1] == ticTacToeBox[4] && ticTacToeBox[4] == ticTacToeBox[7])
        return 1;

    else if (ticTacToeBox[3] == ticTacToeBox[6] && ticTacToeBox[6] == ticTacToeBox[9])
        return 1;

    else if (ticTacToeBox[2] == ticTacToeBox[5] && ticTacToeBox[5] == ticTacToeBox[8])
        return 1;

    else if (ticTacToeBox[1] == ticTacToeBox[5] && ticTacToeBox[5] == ticTacToeBox[9])
        return 1;

    else if (ticTacToeBox[3] == ticTacToeBox[5] && ticTacToeBox[5] == ticTacToeBox[7])
        return 1;
    else if( ticTacToeBox[1] != '1' && ticTacToeBox[2] != '2' && ticTacToeBox[3] != '3'
            && ticTacToeBox[4] != '4' && ticTacToeBox[5] != '5' && ticTacToeBox[6] != '6'
            && ticTacToeBox[7] != '7' && ticTacToeBox[8] != '8' && ticTacToeBox[9] != '9' )
        return 0;
    else
        return -1;

}

void board()
{
    system("cls");
    printf("\n\nTIC TAC TOE made by Noyan Alakoc\n\n");

    printf("Player 1 (X) - Player 2 (O)\n\n\n");

    printf("     |     |     \n");

    printf("  %c  |  %c  |  %c  \n", ticTacToeBox[1], ticTacToeBox[2], ticTacToeBox[3]);

    printf("_____|_____|_____\n");
    printf("     |     |     \n");

    printf("  %c  |  %c  |  %c  \n", ticTacToeBox[4], ticTacToeBox[5], ticTacToeBox[6]);

    printf("_____|_____|_____\n");
    printf("     |     |     \n");

    printf("  %c  |  %c  |  %c  \n", ticTacToeBox[7], ticTacToeBox[8], ticTacToeBox[9]);

    printf("     |     |     \n\n\n");
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "disksAndPlayers.h"
#include "computePositions.h"
#include "disksPlacement.h"
#define SIZE 8

void computePositions_Black (disk board[SIZE][SIZE], player player1)
{
    /* variables to save column and row number */
    int row[30];
    int col[30];
    int counter = 0;

    /* initializing all elements to 10000 for better usage later on
     in the program  */
    for(int i = 0; i < 30; i++){
        row[i] = -1;
        col[i] = -1;
    }

    /* checking horizontally left to right */
    for(int i = 0; i <=7; i++){
        for(int j = 0; j <=7; j++){
            if(board[i][j].type == BLACK){
                if(board[i][j+1].type == WHITE && board[i][j+2].type == NONE){
                  if(i >= 0 && i <= 7 && j+2 >= 0 && j+2 <= 7){
                    row[counter] = i;
                    col[counter] = j+2;
                    counter++;
                  }
                }
                else if(board[i][j+1].type == WHITE && board[i][j+2].type == WHITE && board[i][j+3].type == NONE){
                  if(i >= 0 && i <= 7 && j+3 >= 0 && j+3 <= 7){
                    row[counter] = i;
                    col[counter] = j + 3;
                    counter++;
                  }
                }
                else if(board[i][j+1].type == WHITE && board[i][j+2].type == WHITE && board[i][j+3].type == WHITE && board[i][j+4].type == NONE){
                  if(i >= 0 && i <= 7 && j+4 >= 0 && j+4 <= 7){
                    row[counter] = i;
                    col[counter] = j + 4;
                    counter++;
                  }
                }
                else if(board[i][j+1].type == WHITE && board[i][j+2].type == WHITE && board[i][j+3].type == WHITE && board[i][j+4].type == WHITE && board[i][j+5].type == NONE){
                  if(i >= 0 && i <= 7 && j+5 >= 0 && j+5 <= 7){
                    row[counter] = i;
                    col[counter] = j + 5;
                    counter++;
                  }
                }
                else if(board[i][j+1].type == WHITE && board[i][j+2].type == WHITE && board[i][j+3].type == WHITE && board[i][j+4].type == WHITE && board[i][j+5].type == WHITE && board[i][j+6].type == NONE){
                  if(i >= 0 && i <= 7 && j+6 >= 0 && j+6 <= 7){
                    row[counter] = i;
                    col[counter] = j + 6;
                    counter++;
                  }
                }
                else if(board[i][j+1].type == WHITE && board[i][j+2].type == WHITE && board[i][j+3].type == WHITE && board[i][j+4].type == WHITE && board[i][j+5].type == WHITE && board[i][j+6].type == WHITE && board[i][j+7].type == NONE){
                  if(i >= 0 && i <= 7 && j+7 >= 0 && j+7 <= 7){
                    row[counter] = i;
                    col[counter] = j + 7;
                    counter++;
                  }
                }
            }
        }
    }

    /* checking horizontally right to left*/
    for(int i = 7; i >= 0; i--){
        for(int j = 7; j >=0; j--){
            if(board[i][j].type == BLACK){
                if(board[i][j-1].type == WHITE && board[i][j-2].type == NONE){
                  if(i >= 0 && i <= 7 && j-2 >= 0 && j-2 <= 7){
                    row[counter] = i;
                    col[counter] = j - 2;
                    counter++;
                  }
                }
                else if(board[i][j-1].type == WHITE && board[i][j-2].type == WHITE && board[i][j-3].type == NONE){
                  if(i >= 0 && i <= 7 && j-3 >= 0 && j-3 <= 7){
                    row[counter] = i;
                    col[counter] = j - 3;
                    counter++;
                  }
                }
                else if(board[i][j-1].type == WHITE && board[i][j-2].type == WHITE && board[i][j-3].type == WHITE && board[i][j-4].type == NONE){
                  if(i >= 0 && i <= 7 && j-4 >= 0 && j-4 <= 7){
                    row[counter] = i;
                    col[counter] = j - 4;
                    counter++;
                }
              }
                else if(board[i][j-1].type == WHITE && board[i][j-2].type == WHITE && board[i][j-3].type == WHITE && board[i][j-4].type == WHITE && board[i][j-5].type == NONE){
                  if(i >= 0 && i <= 7 && j-5 >= 0 && j-5 <= 7){
                    row[counter] = i;
                    col[counter] = j - 5;
                    counter++;
                  }
                }
                else if(board[i][j-1].type == WHITE && board[i][j-2].type == WHITE && board[i][j-3].type == WHITE && board[i][j-4].type == WHITE && board[i][j-5].type == WHITE && board[i][j-6].type == NONE){
                  if(i >= 0 && i <= 7 && j-6 >= 0 && j-6 <= 7){
                    row[counter] = i;
                    col[counter] = j - 6;
                    counter++;
                }
              }
                else if(board[i][j-1].type == WHITE && board[i][j-2].type == WHITE && board[i][j-3].type == WHITE && board[i][j-4].type == WHITE && board[i][j-5].type == WHITE && board[i][j-6].type == WHITE && board[i][j-7].type == NONE){
                  if(i >= 0 && i <= 7 && j-7 >= 0 && j-7 <= 7){
                    row[counter] = i;
                    col[counter] = j - 7;
                    counter++;
                  }
                }
            }
        }
    }

    /* checking vertically up-down */
    for(int i = 0; i <=7; i++){
        for(int j = 0; j <=7; j++){
            if(board[j][i].type == BLACK){
                if(board[j+1][i].type == WHITE && board[j+2][i].type == NONE){
                  if(i >= 0 && i <= 7 && j+2 >= 0 && j+2 <=7){
                    row[counter] = j + 2;
                    col[counter] = i;
                    counter++;
                  }
                }
                else if(board[j+1][i].type == WHITE && board[j+2][i].type == WHITE && board[j+3][i].type == NONE){
                  if(i >= 0 && i <= 7 && j+3 >= 0 && j+3 <=7){
                    row[counter] = j + 3;
                    col[counter] = i;
                    counter++;
                  }
                }
                else if(board[j+1][i].type == WHITE && board[j+2][i].type == WHITE && board[j+3][i].type == WHITE && board[j+4][i].type == NONE){
                  if(i >= 0 && i <= 7 && j+4 >= 0 && j+4 <=7){
                    row[counter] = j + 4;
                    col[counter] = i;
                    counter++;
                  }
                }
                else if(board[j+1][i].type == WHITE && board[j+2][i].type == WHITE && board[j+3][i].type == WHITE && board[j+4][i].type == WHITE && board[j+5][i].type == NONE){
                  if(i >= 0 && i <= 7 && j+5 >= 0 && j+5 <=7){
                    row[counter] = j + 5;
                    col[counter] = i;
                    counter++;
                  }
                }
                else if(board[j+1][i].type == WHITE && board[j+2][i].type == WHITE && board[j+3][i].type == WHITE && board[j+4][i].type == WHITE && board[j+5][i].type == WHITE && board[j+6][i].type == NONE){
                  if(i >= 0 && i <= 7 && j+6 >= 0 && j+6 <=7){
                    row[counter] = j + 6;
                    col[counter] = i;
                    counter++;
                  }
                }
                else if(board[j+1][i].type == WHITE && board[j+2][i].type == WHITE && board[j+3][i].type == WHITE && board[j+4][i].type == WHITE && board[j+5][i].type == WHITE && board[j+6][i].type == WHITE && board[j+7][i].type == NONE){
                  if(i >= 0 && i <= 7 && j+7 >= 0 && j+7 <=7){
                    row[counter] = j + 7;
                    col[counter] = i;
                    counter++;
                  }
                }
            }
        }
    }

    /* checking vertically down-up */
    for(int i = 7; i >= 0; i--){
        for(int j = 7; j >= 0; j--){
            if(board[j][i].type == BLACK){
                if(board[j-1][i].type == WHITE && board[j-2][i].type == NONE){
                  if(i >= 0 && i <=7 && j-2 >= 0 && j-2 <= 7){
                    row[counter] = j - 2;
                    col[counter] = i;
                    counter++;
                  }
                }
                else if(board[j-1][i].type == WHITE && board[j-2][i].type == WHITE && board[j-3][i].type == NONE){
                  if(i >= 0 && i <=7 && j-3 >= 0 && j-3 <= 7){
                    row[counter] = j - 3;
                    col[counter] = i;
                    counter++;
                  }
                }
                else if(board[j-1][i].type == WHITE && board[j-2][i].type == WHITE && board[j-3][i].type == WHITE && board[j-4][i].type == NONE){
                  if(i >= 0 && i <=7 && j-4 >= 0 && j-4 <= 7){
                    row[counter] = j - 4;
                    col[counter] = i;
                    counter++;
                  }
                }
                else if(board[j-1][i].type == WHITE && board[j-2][i].type == WHITE && board[j-3][i].type == WHITE && board[j-4][i].type == WHITE && board[j-5][i].type == NONE){
                  if(i >= 0 && i <=7 && j-5 >= 0 && j-5 <= 7){
                    row[counter] = j - 5;
                    col[counter] = i;
                    counter++;
                  }
                }
                else if(board[j-1][i].type == WHITE && board[j-2][i].type == WHITE && board[j-3][i].type == WHITE && board[j-4][i].type == WHITE && board[j-5][i].type == WHITE && board[j-6][i].type == NONE){
                  if(i >= 0 && i <=7 && j-6 >= 0 && j-6 <= 7){
                    row[counter] = j - 6;
                    col[counter] = i;
                    counter++;
                  }
                }
                else if(board[j-1][i].type == WHITE && board[j-2][i].type == WHITE && board[j-3][i].type == WHITE && board[j-4][i].type == WHITE && board[j-5][i].type == WHITE && board[j-6][i].type == WHITE && board[j-7][i].type == NONE){
                  if(i >= 0 && i <=7 && j-7 >= 0 && j-7 <= 7){
                    row[counter] = j - 7;
                    col[counter] = i;
                    counter++;
                  }
                }
            }
        }
    }

    /* checking left to right diagonally */
    for(int i = 0; i <=7; i++){
        for(int j = 0; j <=7; j++){
            if(board[i][j].type == BLACK){
                if(board[i-1][j+1].type == WHITE && board[i-2][j+2].type == NONE){
                  if(i-2 >= 0 && i-2 <= 7 && j+2 >= 0 && j+2 <= 7){
                    row[counter] = i - 2;
                    col[counter] = j + 2;
                    counter++;
                  }
                }
                else if(board[i-1][j+1].type == WHITE && board[i-2][j+2].type == WHITE && board[i-3][j+3].type == NONE){
                  if(i-3 >= 0 && i-3 <= 7 && j+3 >= 0 && j+3 <= 7){
                    row[counter] = i - 3;
                    col[counter] = j + 3;
                    counter++;
                  }
                }
                else if(board[i-1][j+1].type == WHITE && board[i-2][j+2].type == WHITE && board[i-3][j+3].type == WHITE && board[i-4][j+4].type == NONE){
                  if(i-4 >= 0 && i-4 <= 7 && j+4 >= 0 && j+4 <= 7){
                    row[counter] = i - 4;
                    col[counter] = j + 4;
                    counter++;
                  }
                }
                else if(board[i-1][j+1].type == WHITE && board[i-2][j+2].type == WHITE && board[i-3][j+3].type == WHITE && board[i-4][j+4].type == WHITE && board[i-5][j+5].type == NONE){
                  if(i-5 >= 0 && i-5 <= 7 && j+5 >= 0 && j+5 <= 7){
                    row[counter] = i - 5;
                    col[counter] = j + 5;
                    counter++;
                  }
                }
                else if(board[i-1][j+1].type == WHITE && board[i-2][j+2].type == WHITE && board[i-3][j+3].type == WHITE && board[i-4][j+4].type == WHITE && board[i-5][j+5].type == WHITE && board[i-6][j+6].type == NONE){
                  if(i-6 >= 0 && i-6 <= 7 && j+6 >= 0 && j+6 <= 7){
                    row[counter] = i - 6;
                    col[counter] = j + 6;
                    counter++;
                  }
                }
                else if(board[i-1][j+1].type == WHITE && board[i-2][j+2].type == WHITE && board[i-3][j+3].type == WHITE && board[i-4][j+4].type == WHITE && board[i-5][j+5].type == WHITE && board[i-6][j+6].type == WHITE && board[i-7][j+7].type == NONE){
                  if(i-7 >= 0 && i-7 <= 7 && j+7 >= 0 && j+7 <= 7){
                    row[counter] = i - 7;
                    col[counter] = j + 7;
                    counter++;
                  }
                }
            }
        }
    }

    /* checking right to left diagonally */
    for(int i = 7; i >= 0; i--){
        for(int j = 7; j >= 0; j--){
            if(board[i][j].type == BLACK){
                if(board[i+1][j-1].type == WHITE && board[i+2][j-2].type == NONE){
                  if(i+2 >= 0 && i+2 <= 7 && j-2 >= 0 && j-2 <= 7){
                    row[counter] = i + 2;
                    col[counter] = j - 2;
                    counter++;
                  }
                }
                else if(board[i+1][j-1].type == WHITE && board[i+2][j-2].type == WHITE && board[i+3][j-3].type == NONE){
                  if(i+3 >= 0 && i+3 <= 7 && j-3 >= 0 && j-3 <= 7){
                    row[counter] = i + 3;
                    col[counter] = j - 3;
                    counter++;
                  }
                }
                else if(board[i+1][j-1].type == WHITE && board[i+2][j-2].type == WHITE && board[i+3][j-3].type == WHITE && board[i+4][j-4].type == NONE){
                  if(i+4 >= 0 && i+4 <= 7 && j-4 >= 0 && j-4 <= 7){
                    row[counter] = i + 4;
                    col[counter] = j - 4;
                    counter++;
                  }
                }
                else if(board[i+1][j-1].type == WHITE && board[i+2][j-2].type == WHITE && board[i+3][j-3].type == WHITE && board[i+4][j-4].type == WHITE && board[i+5][j-5].type == NONE){
                  if(i+5 >= 0 && i+5 <= 7 && j-5 >= 0 && j-5 <= 7){
                    row[counter] = i + 5;
                    col[counter] = j - 5;
                    counter++;
                  }
                }
                else if(board[i+1][j-1].type == WHITE && board[i+2][j-2].type == WHITE && board[i+3][j-3].type == WHITE && board[i+4][j-4].type == WHITE && board[i+5][j-5].type == WHITE && board[i+6][j-6].type == NONE){
                  if(i+6 >= 0 && i+6 <= 7 && j-6 >= 0 && j-6 <= 7){
                    row[counter] = i + 6;
                    col[counter] = j - 6;
                    counter++;
                  }
                }
                else if(board[i+1][j-1].type == WHITE && board[i+2][j-2].type == WHITE && board[i+3][j-3].type == WHITE && board[i+4][j-4].type == WHITE && board[i+5][j-5].type == WHITE && board[i+6][j-6].type == WHITE && board[i+7][j-7].type == NONE){
                  if(i+7 >= 0 && i+7 <= 7 && j-7 >= 0 && j-7 <= 7){
                    row[counter] = i + 7;
                    col[counter] = j - 7;
                    counter++;
                  }
                }
            }
        }
    }

    /* checking up-down diagonally */
    for(int i = 0; i <=7; i++){
        for(int j = 0; j <=7; j++){
            if(board[i][j].type == BLACK){
                if(board[i+1][j+1].type == WHITE && board[i+2][j+2].type == NONE){
                  if(i+2 >= 0 && i+2 <=7 && j+2 >= 0 && j+2 <=7){
                    row[counter] = i + 2;
                    col[counter] = j + 2;
                    counter++;
                  }
                }
                else if(board[i+1][j+1].type == WHITE && board[i+2][j+2].type == WHITE && board[i+3][j+3].type == NONE){
                  if(i+3 >= 0 && i+3 <=7 && j+3 >= 0 && j+3 <=7){
                    row[counter] = i + 3;
                    col[counter] = j + 3;
                    counter++;
                  }
                }
                else if(board[i+1][j+1].type == WHITE && board[i+2][j+2].type == WHITE && board[i+3][j+3].type == WHITE && board[i+4][j+4].type == NONE){
                  if(i+4 >= 0 && i+4 <=7 && j+4 >= 0 && j+4 <=7){
                    row[counter] = i + 4;
                    col[counter] = j + 4;
                    counter++;
                  }
                }
                else if(board[i+1][j+1].type == WHITE && board[i+2][j+2].type == WHITE && board[i+3][j+3].type == WHITE && board[i+4][j+4].type == WHITE && board[i+5][j+5].type == NONE){
                  if(i+5 >= 0 && i+5 <=7 && j+5 >= 0 && j+5 <=7){
                    row[counter] = i + 5;
                    col[counter] = j + 5;
                    counter++;
                  }
                }
                else if(board[i+1][j+1].type == WHITE && board[i+2][j+2].type == WHITE && board[i+3][j+3].type == WHITE && board[i+4][j+4].type == WHITE && board[i+5][j+5].type == WHITE && board[i+6][j+6].type == NONE){
                  if(i+6 >= 0 && i+6 <=7 && j+6 >= 0 && j+6 <=7){
                    row[counter] = i + 6;
                    col[counter] = j + 6;
                    counter++;
                  }
                }
                else if(board[i+1][j+1].type == WHITE && board[i+2][j+2].type == WHITE && board[i+3][j+3].type == WHITE && board[i+4][j+4].type == WHITE && board[i+5][j+5].type == WHITE && board[i+6][j+6].type == WHITE && board[i+7][j+7].type == NONE){
                  if(i+7 >= 0 && i+7 <=7 && j+7 >= 0 && j+7 <=7){
                    row[counter] = i + 7;
                    col[counter] = j + 7;
                    counter++;
                  }
                }
            }
        }
    }

    /* checking down-up diagonally */
    for(int i = 7; i >= 0; i--){
        for(int j = 7; j >= 0; j--){
            if(board[i][j].type == BLACK){
                if(board[i-1][j-1].type == WHITE && board[i-2][j-2].type == NONE){
                  if(i-2 >= 0 && i-2 <= 7 && j-2 >= 0 && j-2 <=7){
                    row[counter] = i - 2;
                    col[counter] = j - 2;
                    counter++;
                  }
                }
                else if(board[i-1][j-1].type == WHITE && board[i-2][j-2].type == WHITE && board[i-3][j-3].type == NONE){
                  if(i-3 >= 0 && i-3 <= 7 && j-3 >= 0 && j-3 <=7){
                    row[counter] = i - 3;
                    col[counter] = j - 3;
                    counter++;
                  }
                }
                else if(board[i-1][j-1].type == WHITE && board[i-2][j-2].type == WHITE && board[i-3][j-3].type == WHITE && board[i-4][j-4].type == NONE){
                  if(i-4 >= 0 && i-4 <= 7 && j-4 >= 0 && j-4 <=7){
                    row[counter] = i - 4;
                    col[counter] = j - 4;
                    counter++;
                  }
                }
                else if(board[i-1][j-1].type == WHITE && board[i-2][j-2].type == WHITE && board[i-3][j-3].type == WHITE && board[i-4][j-4].type == WHITE && board[i-5][j-5].type == NONE){
                  if(i-5 >= 0 && i-5 <= 7 && j-5 >= 0 && j-5 <=7){
                    row[counter] = i - 5;
                    col[counter] = j - 5;
                    counter++;
                  }
                }
                else if(board[i-1][j-1].type == WHITE && board[i-2][j-2].type == WHITE && board[i-3][j-3].type == WHITE && board[i-4][j-4].type == WHITE && board[i-5][j-5].type == WHITE && board[i-6][j-6].type == NONE){
                  if(i-6 >= 0 && i-6 <= 7 && j-6 >= 0 && j-6 <=7){
                    row[counter] = i - 6;
                    col[counter] = j - 6;
                    counter++;
                  }
                }
                else if(board[i-1][j-1].type == WHITE && board[i-2][j-2].type == WHITE && board[i-3][j-3].type == WHITE && board[i-4][j-4].type == WHITE && board[i-5][j-5].type == WHITE && board[i-6][j-6].type == WHITE && board[i-7][j-7].type == NONE){
                  if(i-7 >= 0 && i-7 <= 7 && j-7 >= 0 && j-7 <=7){
                    row[counter] = i - 7;
                    col[counter] = j - 7;
                    counter++;
                  }
                }
            }
        }
    }

    /* variables to save user's choice */
    int userChoice;
    int nmbr = 1;

    /* displaying the positions available to the user */
    printf("\n<%s> choose your next move: \n", player1.name);
    for(int print = 0; print < counter; print++){
        if(row[print] != -1 && col[print] != -1){
            printf("%d. (%d, %d)\t", nmbr, row[print]+1, col[print]+1);
            nmbr++;
        }
    }

      /* taking user's choice */
      printf("\n\n? ");
      scanf("%d", &userChoice);

    //  printf("\nUSER CHOICE: (%d, %d)\n", row[userChoice-1], col[userChoice-1]);

      /* passing the information to the disk-placement function */
      players_placement(BLACK, row[userChoice-1], col[userChoice-1], board);
}




void computePositions_White (disk board[SIZE][SIZE], player player2)
{
    /* variables to save column and row number */
    int row1[30];
    int col1[30];
    int counter1 = 0;

    /* initializing all elements to -1 for better usage later on
     in the program  */
    for(int i = 0; i < 30; i++){
        row1[i] = -1;
        col1[i] = -1;
    }

    /* checking horizontally left to right */
    for(int i = 0; i <=7; i++){
        for(int j = 0; j <=7; j++){
            if(board[i][j].type == WHITE){
                if(board[i][j+1].type == BLACK && board[i][j+2].type == NONE){
                  if(i >= 0 && i <= 7 && j+2 >= 0 && j+2 <= 7){
                    row1[counter1] = i;
                    col1[counter1] = j+2;
                    counter1++;
                  }
                }
                else if(board[i][j+1].type == BLACK && board[i][j+2].type == BLACK && board[i][j+3].type == NONE){
                  if(i >= 0 && i <= 7 && j+3 >= 0 && j+3 <= 7){
                    row1[counter1] = i;
                    col1[counter1] = j + 3;
                    counter1++;
                  }
                }
                else if(board[i][j+1].type == BLACK && board[i][j+2].type == BLACK && board[i][j+3].type == BLACK && board[i][j+4].type == NONE){
                  if(i >= 0 && i <= 7 && j+4 >= 0 && j+4 <= 7){
                    row1[counter1] = i;
                    col1[counter1] = j + 4;
                    counter1++;
                  }
                }
                else if(board[i][j+1].type == BLACK && board[i][j+2].type == BLACK && board[i][j+3].type == BLACK && board[i][j+4].type == BLACK && board[i][j+5].type == NONE){
                  if(i >= 0 && i <= 7 && j+5 >= 0 && j+5 <= 7){
                    row1[counter1] = i;
                    col1[counter1] = j + 5;
                    counter1++;
                  }
                }
                else if(board[i][j+1].type == BLACK && board[i][j+2].type == BLACK && board[i][j+3].type == BLACK && board[i][j+4].type == BLACK && board[i][j+5].type == BLACK && board[i][j+6].type == NONE){
                  if(i >= 0 && i <= 7 && j+6 >= 0 && j+6 <= 7){
                    row1[counter1] = i;
                    col1[counter1] = j + 6;
                    counter1++;
                  }
                }
                else if(board[i][j+1].type == BLACK && board[i][j+2].type == BLACK && board[i][j+3].type == BLACK && board[i][j+4].type == BLACK && board[i][j+5].type == BLACK && board[i][j+6].type == BLACK && board[i][j+7].type == NONE){
                  if(i >= 0 && i <= 7 && j+7 >= 0 && j+7 <= 7){
                    row1[counter1] = i;
                    col1[counter1] = j + 7;
                    counter1++;
                  }
                }
            }
        }
    }

    /* checking horizontally right to left*/
    for(int i = 7; i >= 0; i--){
        for(int j = 7; j >=0; j--){
            if(board[i][j].type == WHITE){
                if(board[i][j-1].type == BLACK && board[i][j-2].type == NONE){
                  if(i >= 0 && i <= 7 && j-2 >= 0 && j-2 <= 7){
                    row1[counter1] = i;
                    col1[counter1] = j - 2;
                    counter1++;
                  }
                }
                else if(board[i][j-1].type == BLACK && board[i][j-2].type == BLACK && board[i][j-3].type == NONE){
                  if(i >= 0 && i <= 7 && j-3 >= 0 && j-3 <= 7){
                    row1[counter1] = i;
                    col1[counter1] = j - 3;
                    counter1++;
                  }
                }
                else if(board[i][j-1].type == BLACK && board[i][j-2].type == BLACK && board[i][j-3].type == BLACK && board[i][j-4].type == NONE){
                  if(i >= 0 && i <= 7 && j-4 >= 0 && j-4 <= 7){
                    row1[counter1] = i;
                    col1[counter1] = j - 4;
                    counter1++;
                }
              }
                else if(board[i][j-1].type == BLACK && board[i][j-2].type == BLACK && board[i][j-3].type == BLACK && board[i][j-4].type == BLACK && board[i][j-5].type == NONE){
                  if(i >= 0 && i <= 7 && j-5 >= 0 && j-5 <= 7){
                    row1[counter1] = i;
                    col1[counter1] = j - 5;
                    counter1++;
                  }
                }
                else if(board[i][j-1].type == BLACK && board[i][j-2].type == BLACK && board[i][j-3].type == BLACK && board[i][j-4].type == BLACK && board[i][j-5].type == BLACK && board[i][j-6].type == NONE){
                  if(i >= 0 && i <= 7 && j-6 >= 0 && j-6 <= 7){
                    row1[counter1] = i;
                    col1[counter1] = j - 6;
                    counter1++;
                }
              }
                else if(board[i][j-1].type == BLACK && board[i][j-2].type == BLACK && board[i][j-3].type == BLACK && board[i][j-4].type == BLACK && board[i][j-5].type == BLACK && board[i][j-6].type == BLACK && board[i][j-7].type == NONE){
                  if(i >= 0 && i <= 7 && j-7 >= 0 && j-7 <= 7){
                    row1[counter1] = i;
                    col1[counter1] = j - 7;
                    counter1++;
                  }
                }
            }
        }
    }

    /* checking vertically up-down */
    for(int i = 0; i <=7; i++){
        for(int j = 0; j <=7; j++){
            if(board[j][i].type == WHITE){
                if(board[j+1][i].type == BLACK && board[j+2][i].type == NONE){
                  if(i >= 0 && i <= 7 && j+2 >= 0 && j+2 <=7){
                    row1[counter1] = j + 2;
                    col1[counter1] = i;
                    counter1++;
                  }
                }
                else if(board[j+1][i].type == BLACK && board[j+2][i].type == BLACK && board[j+3][i].type == NONE){
                  if(i >= 0 && i <= 7 && j+3 >= 0 && j+3 <=7){
                    row1[counter1] = j + 3;
                    col1[counter1] = i;
                    counter1++;
                  }
                }
                else if(board[j+1][i].type == BLACK && board[j+2][i].type == BLACK && board[j+3][i].type == BLACK && board[j+4][i].type == NONE){
                  if(i >= 0 && i <= 7 && j+4 >= 0 && j+4 <=7){
                    row1[counter1] = j + 4;
                    col1[counter1] = i;
                    counter1++;
                  }
                }
                else if(board[j+1][i].type == BLACK && board[j+2][i].type == BLACK && board[j+3][i].type == BLACK && board[j+4][i].type == BLACK && board[j+5][i].type == NONE){
                  if(i >= 0 && i <= 7 && j+5 >= 0 && j+5 <=7){
                    row1[counter1] = j + 5;
                    col1[counter1] = i;
                    counter1++;
                  }
                }
                else if(board[j+1][i].type == BLACK && board[j+2][i].type == BLACK && board[j+3][i].type == BLACK && board[j+4][i].type == BLACK && board[j+5][i].type == BLACK && board[j+6][i].type == NONE){
                  if(i >= 0 && i <= 7 && j+6 >= 0 && j+6 <=7){
                    row1[counter1] = j + 6;
                    col1[counter1] = i;
                    counter1++;
                  }
                }
                else if(board[j+1][i].type == BLACK && board[j+2][i].type == BLACK && board[j+3][i].type == BLACK && board[j+4][i].type == BLACK && board[j+5][i].type == BLACK && board[j+6][i].type == BLACK && board[j+7][i].type == NONE){
                  if(i >= 0 && i <= 7 && j+7 >= 0 && j+7 <=7){
                    row1[counter1] = j + 7;
                    col1[counter1] = i;
                    counter1++;
                  }
                }
            }
        }
    }

    /* checking vertically down-up */
    for(int i = 7; i >= 0; i--){
        for(int j = 7; j >= 0; j--){
            if(board[j][i].type == WHITE){
                if(board[j-1][i].type == BLACK && board[j-2][i].type == NONE){
                  if(i >= 0 && i <=7 && j-2 >= 0 && j-2 <= 7){
                    row1[counter1] = j - 2;
                    col1[counter1] = i;
                    counter1++;
                  }
                }
                else if(board[j-1][i].type == BLACK && board[j-2][i].type == BLACK && board[j-3][i].type == NONE){
                  if(i >= 0 && i <=7 && j-3 >= 0 && j-3 <= 7){
                    row1[counter1] = j - 3;
                    col1[counter1] = i;
                    counter1++;
                  }
                }
                else if(board[j-1][i].type == BLACK && board[j-2][i].type == BLACK && board[j-3][i].type == BLACK && board[j-4][i].type == NONE){
                  if(i >= 0 && i <=7 && j-4 >= 0 && j-4 <= 7){
                    row1[counter1] = j - 4;
                    col1[counter1] = i;
                    counter1++;
                  }
                }
                else if(board[j-1][i].type == BLACK && board[j-2][i].type == BLACK && board[j-3][i].type == BLACK && board[j-4][i].type == BLACK && board[j-5][i].type == NONE){
                  if(i >= 0 && i <=7 && j-5 >= 0 && j-5 <= 7){
                    row1[counter1] = j - 5;
                    col1[counter1] = i;
                    counter1++;
                  }
                }
                else if(board[j-1][i].type == BLACK && board[j-2][i].type == BLACK && board[j-3][i].type == BLACK && board[j-4][i].type == BLACK && board[j-5][i].type == BLACK && board[j-6][i].type == NONE){
                  if(i >= 0 && i <=7 && j-6 >= 0 && j-6 <= 7){
                    row1[counter1] = j - 6;
                    col1[counter1] = i;
                    counter1++;
                  }
                }
                else if(board[j-1][i].type == BLACK && board[j-2][i].type == BLACK && board[j-3][i].type == BLACK && board[j-4][i].type == BLACK && board[j-5][i].type == BLACK && board[j-6][i].type == BLACK && board[j-7][i].type == NONE){
                  if(i >= 0 && i <=7 && j-7 >= 0 && j-7 <= 7){
                    row1[counter1] = j - 7;
                    col1[counter1] = i;
                    counter1++;
                  }
                }
            }
        }
    }

    /* checking left to right diagonally */
    for(int i = 0; i <=7; i++){
        for(int j = 0; j <=7; j++){
            if(board[i][j].type == WHITE){
                if(board[i-1][j+1].type == BLACK && board[i-2][j+2].type == NONE){
                  if(i-2 >= 0 && i-2 <= 7 && j+2 >= 0 && j+2 <= 7){
                    row1[counter1] = i - 2;
                    col1[counter1] = j + 2;
                    counter1++;
                  }
                }
                else if(board[i-1][j+1].type == BLACK && board[i-2][j+2].type == BLACK && board[i-3][j+3].type == NONE){
                  if(i-3 >= 0 && i-3 <= 7 && j+3 >= 0 && j+3 <= 7){
                    row1[counter1] = i - 3;
                    col1[counter1] = j + 3;
                    counter1++;
                  }
                }
                else if(board[i-1][j+1].type == BLACK && board[i-2][j+2].type == BLACK && board[i-3][j+3].type == BLACK && board[i-4][j+4].type == NONE){
                  if(i-4 >= 0 && i-4 <= 7 && j+4 >= 0 && j+4 <= 7){
                    row1[counter1] = i - 4;
                    col1[counter1] = j + 4;
                    counter1++;
                  }
                }
                else if(board[i-1][j+1].type == BLACK && board[i-2][j+2].type == BLACK && board[i-3][j+3].type == BLACK && board[i-4][j+4].type == BLACK && board[i-5][j+5].type == NONE){
                  if(i-5 >= 0 && i-5 <= 7 && j+5 >= 0 && j+5 <= 7){
                    row1[counter1] = i - 5;
                    col1[counter1] = j + 5;
                    counter1++;
                  }
                }
                else if(board[i-1][j+1].type == BLACK && board[i-2][j+2].type == BLACK && board[i-3][j+3].type == BLACK && board[i-4][j+4].type == BLACK && board[i-5][j+5].type == BLACK && board[i-6][j+6].type == NONE){
                  if(i-6 >= 0 && i-6 <= 7 && j+6 >= 0 && j+6 <= 7){
                    row1[counter1] = i - 6;
                    col1[counter1] = j + 6;
                    counter1++;
                  }
                }
                else if(board[i-1][j+1].type == BLACK && board[i-2][j+2].type == BLACK && board[i-3][j+3].type == BLACK && board[i-4][j+4].type == BLACK && board[i-5][j+5].type == BLACK && board[i-6][j+6].type == BLACK && board[i-7][j+7].type == NONE){
                  if(i-7 >= 0 && i-7 <= 7 && j+7 >= 0 && j+7 <= 7){
                    row1[counter1] = i - 7;
                    col1[counter1] = j + 7;
                    counter1++;
                  }
                }
            }
        }
    }

    /* checking right to left diagonally */
    for(int i = 7; i >= 0; i--){
        for(int j = 7; j >= 0; j--){
            if(board[i][j].type == WHITE){
                if(board[i+1][j-1].type == BLACK && board[i+2][j-2].type == NONE){
                  if(i+2 >= 0 && i+2 <= 7 && j-2 >= 0 && j-2 <= 7){
                    row1[counter1] = i + 2;
                    col1[counter1] = j - 2;
                    counter1++;
                  }
                }
                else if(board[i+1][j-1].type == BLACK && board[i+2][j-2].type == BLACK && board[i+3][j-3].type == NONE){
                  if(i+3 >= 0 && i+3 <= 7 && j-3 >= 0 && j-3 <= 7){
                    row1[counter1] = i + 3;
                    col1[counter1] = j - 3;
                    counter1++;
                  }
                }
                else if(board[i+1][j-1].type == BLACK && board[i+2][j-2].type == BLACK && board[i+3][j-3].type == BLACK && board[i+4][j-4].type == NONE){
                  if(i+4 >= 0 && i+4 <= 7 && j-4 >= 0 && j-4 <= 7){
                    row1[counter1] = i + 4;
                    col1[counter1] = j - 4;
                    counter1++;
                  }
                }
                else if(board[i+1][j-1].type == BLACK && board[i+2][j-2].type == BLACK && board[i+3][j-3].type == BLACK && board[i+4][j-4].type == BLACK && board[i+5][j-5].type == NONE){
                  if(i+5 >= 0 && i+5 <= 7 && j-5 >= 0 && j-5 <= 7){
                    row1[counter1] = i + 5;
                    col1[counter1] = j - 5;
                    counter1++;
                  }
                }
                else if(board[i+1][j-1].type == BLACK && board[i+2][j-2].type == BLACK && board[i+3][j-3].type == BLACK && board[i+4][j-4].type == BLACK && board[i+5][j-5].type == BLACK && board[i+6][j-6].type == NONE){
                  if(i+6 >= 0 && i+6 <= 7 && j-6 >= 0 && j-6 <= 7){
                    row1[counter1] = i + 6;
                    col1[counter1] = j - 6;
                    counter1++;
                  }
                }
                else if(board[i+1][j-1].type == BLACK && board[i+2][j-2].type == BLACK && board[i+3][j-3].type == BLACK && board[i+4][j-4].type == BLACK && board[i+5][j-5].type == BLACK && board[i+6][j-6].type == BLACK && board[i+7][j-7].type == NONE){
                  if(i+7 >= 0 && i+7 <= 7 && j-7 >= 0 && j-7 <= 7){
                    row1[counter1] = i + 7;
                    col1[counter1] = j - 7;
                    counter1++;
                  }
                }
            }
        }
    }

    /* checking up-down diagonally */
    for(int i = 0; i <=7; i++){
        for(int j = 0; j <=7; j++){
            if(board[i][j].type == WHITE){
                if(board[i+1][j+1].type == BLACK && board[i+2][j+2].type == NONE){
                  if(i+2 >= 0 && i+2 <=7 && j+2 >= 0 && j+2 <=7){
                    row1[counter1] = i + 2;
                    col1[counter1] = j + 2;
                    counter1++;
                  }
                }
                else if(board[i+1][j+1].type == BLACK && board[i+2][j+2].type == BLACK && board[i+3][j+3].type == NONE){
                  if(i+3 >= 0 && i+3 <=7 && j+3 >= 0 && j+3 <=7){
                    row1[counter1] = i + 3;
                    col1[counter1] = j + 3;
                    counter1++;
                  }
                }
                else if(board[i+1][j+1].type == BLACK && board[i+2][j+2].type == BLACK && board[i+3][j+3].type == BLACK && board[i+4][j+4].type == NONE){
                  if(i+4 >= 0 && i+4 <=7 && j+4 >= 0 && j+4 <=7){
                    row1[counter1] = i + 4;
                    col1[counter1] = j + 4;
                    counter1++;
                  }
                }
                else if(board[i+1][j+1].type == BLACK && board[i+2][j+2].type == BLACK && board[i+3][j+3].type == BLACK && board[i+4][j+4].type == BLACK && board[i+5][j+5].type == NONE){
                  if(i+5 >= 0 && i+5 <=7 && j+5 >= 0 && j+5 <=7){
                    row1[counter1] = i + 5;
                    col1[counter1] = j + 5;
                    counter1++;
                  }
                }
                else if(board[i+1][j+1].type == BLACK && board[i+2][j+2].type == BLACK && board[i+3][j+3].type == BLACK && board[i+4][j+4].type == BLACK && board[i+5][j+5].type == BLACK && board[i+6][j+6].type == NONE){
                  if(i+6 >= 0 && i+6 <=7 && j+6 >= 0 && j+6 <=7){
                    row1[counter1] = i + 6;
                    col1[counter1] = j + 6;
                    counter1++;
                  }
                }
                else if(board[i+1][j+1].type == BLACK && board[i+2][j+2].type == BLACK && board[i+3][j+3].type == BLACK && board[i+4][j+4].type == BLACK && board[i+5][j+5].type == BLACK && board[i+6][j+6].type == BLACK && board[i+7][j+7].type == NONE){
                  if(i+7 >= 0 && i+7 <=7 && j+7 >= 0 && j+7 <=7){
                    row1[counter1] = i + 7;
                    col1[counter1] = j + 7;
                    counter1++;
                  }
                }
            }
        }
    }

    /* checking down-up diagonally */
    for(int i = 7; i >= 0; i--){
        for(int j = 7; j >= 0; j--){
            if(board[i][j].type == WHITE){
                if(board[i-1][j-1].type == BLACK && board[i-2][j-2].type == NONE){
                  if(i-2 >= 0 && i-2 <= 7 && j-2 >= 0 && j-2 <=7){
                    row1[counter1] = i - 2;
                    col1[counter1] = j - 2;
                    counter1++;
                  }
                }
                else if(board[i-1][j-1].type == BLACK && board[i-2][j-2].type == BLACK && board[i-3][j-3].type == NONE){
                  if(i-3 >= 0 && i-3 <= 7 && j-3 >= 0 && j-3 <=7){
                    row1[counter1] = i - 3;
                    col1[counter1] = j - 3;
                    counter1++;
                  }
                }
                else if(board[i-1][j-1].type == BLACK && board[i-2][j-2].type == BLACK && board[i-3][j-3].type == BLACK && board[i-4][j-4].type == NONE){
                  if(i-4 >= 0 && i-4 <= 7 && j-4 >= 0 && j-4 <=7){
                    row1[counter1] = i - 4;
                    col1[counter1] = j - 4;
                    counter1++;
                  }
                }
                else if(board[i-1][j-1].type == BLACK && board[i-2][j-2].type == BLACK && board[i-3][j-3].type == BLACK && board[i-4][j-4].type == BLACK && board[i-5][j-5].type == NONE){
                  if(i-5 >= 0 && i-5 <= 7 && j-5 >= 0 && j-5 <=7){
                    row1[counter1] = i - 5;
                    col1[counter1] = j - 5;
                    counter1++;
                  }
                }
                else if(board[i-1][j-1].type == BLACK && board[i-2][j-2].type == BLACK && board[i-3][j-3].type == BLACK && board[i-4][j-4].type == BLACK && board[i-5][j-5].type == BLACK && board[i-6][j-6].type == NONE){
                  if(i-6 >= 0 && i-6 <= 7 && j-6 >= 0 && j-6 <=7){
                    row1[counter1] = i - 6;
                    col1[counter1] = j - 6;
                    counter1++;
                  }
                }
                else if(board[i-1][j-1].type == BLACK && board[i-2][j-2].type == BLACK && board[i-3][j-3].type == BLACK && board[i-4][j-4].type == BLACK && board[i-5][j-5].type == BLACK && board[i-6][j-6].type == BLACK && board[i-7][j-7].type == NONE){
                  if(i-7 >= 0 && i-7 <= 7 && j-7 >= 0 && j-7 <=7){
                    row1[counter1] = i - 7;
                    col1[counter1] = j - 7;
                    counter1++;
                  }
                }
            }
        }
    }

    /* displaying the positions available to the user */
    int nmbr1 = 1;
    printf("\n<%s> Choose your next move: \n", player2.name);
    for(int print1 = 0; print1 < counter1; print1++){
        if(row1[print1] != -1 && col1[print1] != -1){
            printf("%d. (%d, %d)\t", nmbr1, row1[print1]+1, col1[print1]+1);
            nmbr1++;
        }
    }

      /* taking user's choice */
      int userChoice1;
      printf("\n\n? ");
      scanf("%d", &userChoice1);

    //  printf("\nUSER CHOICE: (%d, %d)\n", row1[userChoice1-1], col1[userChoice1-1]);

      /* passing the information to the disk-placement function */
      players_placement(WHITE, row1[userChoice1-1], col1[userChoice1-1], board);

}

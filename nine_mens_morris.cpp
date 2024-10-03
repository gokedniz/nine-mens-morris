#include <stdio.h>
#include <stdlib.h>

// Global Variables
int points1 = 0;
int points2 = 0;
int bin1 = 6;
int bin2 = 6;
// Global variables to make sure every point will be scanned and calculated one time only
int row0 = 0;
int row1 = 0;
int row2 = 0;
int row3left = 0;
int row3right = 0;

int row4 = 0;
int row5 = 0;
int row6 = 0;

int col0 = 0;
int col1 = 0;
int col2 = 0;
int col3top = 0;
int col3bottom = 0;
int col4 = 0;
int col5 = 0;
int col6 = 0;

int topleft = 0;
int topright = 0;
int bottomleft = 0;
int bottomright = 0;

// Function for printing the board after every turn
void board(char arr[7][7]){
    printf("  0    1    2             3             4    5    6\n");
    printf("0 %c-----------------------%c-----------------------%c\n", arr[0][0], arr[0][3], arr[0][6]);
    printf("1 -----%c------------------%c------------------%c-----\n", arr[1][1], arr[1][3], arr[1][5]);
    printf("2 ----------%c-------------%c-------------%c----------\n", arr[2][2], arr[2][3], arr[2][4]);
    printf("3 %c----%c----%c                           %c----%c----%c\n", arr[3][0], arr[3][1], arr[3][2], arr[3][4], arr[3][5], arr[3][6]);
    printf("4 ----------%c-------------%c-------------%c----------\n", arr[4][2], arr[4][3], arr[4][4]);
    printf("5 -----%c------------------%c------------------%c-----\n", arr[5][1], arr[5][3], arr[5][5]);
    printf("6 %c-----------------------%c-----------------------%c\n", arr[6][0], arr[6][3], arr[6][6]);
}


// Function for checking the winner 
void DetermineWinner(char arr[7][7]){
    printf("\nFinal Points: Player 1 => %d, Player 2 => %d\n", points1, points2);
    printf("Final version of the table:\n");
    board(arr);
    printf("\n");
    if(points1 > points2) 
        printf("Player 1 wins!\n");
    else if(points2 > points1) 
        printf("Player 2 wins!\n");
    else 
        printf("It's a tie!\n");
}



// Function for checking points for each player after every turn
void checkpoints(char arr[7][7]){
    char player;
    for(int i=0; i<7; i++){
        for(int j=0; j<7; j++){
            if(arr[i][j] == '1' || arr[i][j] == '2'){
                player = arr[i][j];
                // Horizontal check row0
                if(i == 0 && j == 0 && player == arr[i][j+3] && player == arr[i][j+6]){
                    for(int j = row0; j < 1; j++, row0++){
						if(player == '1'){
	                        points1++;
	                        printf("Player 1 earned a point!\n");
	                        printf("Player 2 lost a bin!\n\n");
	                        bin2--;                     
	                    } else {
	                        points2++;
	                        printf("Player 2 earned a point!\n");
	                        printf("Player 1 lost a bin!\n\n");
	                        bin1--;                     
	                    } 
	                }
                }
                // Horizontal check row1
                else if(i == 1 && j == 1 && player == arr[i][j+2] && player == arr[i][j+4]){
                    for(int j = row1; j < 1; j++, row1++){
						if(player == '1'){
	                        points1++;
	                        printf("Player 1 earned a point!\n");
	                        printf("Player 2 lost a bin!\n\n");
	                        bin2--;                     
	                    } else {
	                        points2++;
	                        printf("Player 2 earned a point!\n");
	                        printf("Player 1 lost a bin!\n\n");
	                        bin1--;                     
	                    } 
	                }
                }
                // Horizontal check row2
                else if(i == 2 && j == 2 && player == arr[i][j+1] && player == arr[i][j+2]){
                	for(int j = row2; j < 1; j++, row2++){
	                    if(player == '1'){
	                        points1++;
	                        printf("Player 1 earned a point!\n");
	                        printf("Player 2 lost a bin!\n\n");
	                        bin2--;                     
	                    } else {
	                        points2++;
	                        printf("Player 2 earned a point!\n");
	                        printf("Player 1 lost a bin!\n\n");
	                        bin1--;                     
	                    } 
	                }
                }
                // Horizontal check row3left
                else if(i == 3 && j == 0 && player == arr[i][j+1] && player == arr[i][j+2]){
                	for(int j = row3left; j < 1; j++, row3left++){
	                    if(player == '1'){
	                        points1++;
	                        printf("Player 1 earned a point!\n");
	                        printf("Player 2 lost a bin!\n\n");
	                        bin2--;                     
	                    } else {
	                        points2++;
	                        printf("Player 2 earned a point!\n");
	                        printf("Player 1 lost a bin!\n\n");
	                        bin1--;                     
	                    } 
	                }
                }
                // Horizontal check row3right
                else if(i == 3 && j == 4 && player == arr[i][j+1] && player == arr[i][j+2]){
                	for(int j = row3right; j < 1; j++, row3right++){
	                    if(player == '1'){
	                        points1++;
	                        printf("Player 1 earned a point!\n");
	                        printf("Player 2 lost a bin!\n\n");
	                        bin2--;                     
	                    } else {
	                        points2++;
	                        printf("Player 2 earned a point!\n");
	                        printf("Player 1 lost a bin!\n\n");
	                        bin1--;                     
	                    } 
	                }
                }
                // Horizontal check row4
                else if(i == 4 && j == 2 && player == arr[i][j+1] && player == arr[i][j+2]){
                	for(int j = row4; j < 1; j++, row4++){
	                    if(player == '1'){
	                        points1++;
	                        printf("Player 1 earned a point!\n");
	                        printf("Player 2 lost a bin!\n\n");
	                        bin2--;                     
	                    } else {
	                        points2++;
	                        printf("Player 2 earned a point!\n");
	                        printf("Player 1 lost a bin!\n\n");
	                        bin1--;                     
	                    } 
	                }
                }
                // Horizontal check row5
                else if(i == 5 && j == 1 && player == arr[i][j+2] && player == arr[i][j+4]){
                	for(int j = row5; j < 1; j++, row5++){
	                    if(player == '1'){
	                        points1++;
	                        printf("Player 1 earned a point!\n");
	                        printf("Player 2 lost a bin!\n\n");
	                        bin2--;                     
	                    } else {
	                        points2++;
	                        printf("Player 2 earned a point!\n");
	                        printf("Player 1 lost a bin!\n\n");
	                        bin1--;                     
	                    }
					}
                }
                // Horizontal check row6
                else if(i == 6 && j == 0 && player == arr[i][j+3] && player == arr[i][j+6]){
                	for(int j = row6; j < 1; j++, row6++){
	                    if(player == '1'){
	                        points1++;
	                        printf("Player 1 earned a point!\n");
	                        printf("Player 2 lost a bin!\n\n");
	                        bin2--;                     
	                    } else {
	                        points2++;
	                        printf("Player 2 earned a point!\n");
	                        printf("Player 1 lost a bin!\n\n");
	                        bin1--;                     
	                    }
					}
                }
				// Vertical check column0
                if(i == 0 && j == 0 && player == arr[i+3][j] && player == arr[i+6][j]){
                	for(int j = col0; j < 1; j++, col0++){
	                    if(player == '1'){
	                        points1++;
	                        printf("Player 1 earned a point!\n");
	                        printf("Player 2 lost a bin!\n\n");
	                        bin2--;                       
	                    } else {
	                        points2++;
	                        printf("Player 2 earned a point!\n");
	                        printf("Player 1 lost a bin!\n\n");
	                        bin1--;                       
	                    }
	                }
                }
                // Vertical check column1
                else if(i == 1 && j == 1 && player == arr[i+2][j] && player == arr[i+4][j]){
	                	for(int j = col1; j < 1; j++, col1++){
	                    if(player == '1'){
	                        points1++;
	                        printf("Player 1 earned a point!\n");
	                        printf("Player 2 lost a bin!\n\n");
	                        bin2--;                       
	                    } else {
	                        points2++;
	                        printf("Player 2 earned a point!\n");
	                        printf("Player 1 lost a bin!\n\n");
	                        bin1--;                       
	                    }
	                }
                }
                // Vertical check column2
                else if(i == 2 && j == 2 && player == arr[i+1][j] && player == arr[i+2][j]){
                	for(int j = col2; j < 1; j++, col2++){
	                    if(player == '1'){
	                        points1++;
	                        printf("Player 1 earned a point!\n");
	                        printf("Player 2 lost a bin!\n\n");
	                        bin2--;                       
	                    } else {
	                        points2++;
	                        printf("Player 2 earned a point!\n");
	                        printf("Player 1 lost a bin!\n\n");
	                        bin1--;                       
	                    }
	                }
                }
                // Vertical check column3top
                else if(i == 0 && j == 3 && player == arr[i+1][j] && player == arr[i+2][j]){
                	for(int j = col3top; j < 1; j++, col3top++){
	                    if(player == '1'){
	                        points1++;
	                        printf("Player 1 earned a point!\n");
	                        printf("Player 2 lost a bin!\n\n");
	                        bin2--;                       
	                    } else {
	                        points2++;
	                        printf("Player 2 earned a point!\n");
	                        printf("Player 1 lost a bin!\n\n");
	                        bin1--;                       
	                    }
	                }
                }
                // Vertical check column3bottom
                else if(i == 4 && j == 3 && player == arr[i+1][j] && player == arr[i+2][j]){
                	for(int j = col3bottom; j < 1; j++, col3bottom++){
	                    if(player == '1'){
	                        points1++;
	                        printf("Player 1 earned a point!\n");
	                        printf("Player 2 lost a bin!\n\n");
	                        bin2--;                       
	                    } else {
	                        points2++;
	                        printf("Player 2 earned a point!\n");
	                        printf("Player 1 lost a bin!\n\n");
	                        bin1--;                       
	                    }
	                }
                }
                // Vertical check column4
                else if(i == 2 && j == 4 && player == arr[i+1][j] && player == arr[i+2][j]){
                	for(int j = col4; j < 1; j++, col4++){
	                    if(player == '1'){
	                        points1++;
	                        printf("Player 1 earned a point!\n");
	                        printf("Player 2 lost a bin!\n\n");
	                        bin2--;                       
	                    } else {
	                        points2++;
	                        printf("Player 2 earned a point!\n");
	                        printf("Player 1 lost a bin!\n\n");
	                        bin1--;                       
	                    }
	                }
                }
                // Vertical check column5
                else if(i == 1 && j == 5 && player == arr[i+2][j] && player == arr[i+4][j]){
                	for(int j = col5; j < 1; j++, col5++){
	                    if(player == '1'){
	                        points1++;
	                        printf("Player 1 earned a point!\n");
	                        printf("Player 2 lost a bin!\n\n");
	                        bin2--;                       
	                    } else {
	                        points2++;
	                        printf("Player 2 earned a point!\n");
	                        printf("Player 1 lost a bin!\n\n");
	                        bin1--;                       
	                    }
	                }
                }
                // Vertical check column6
                else if(i == 0 && j == 6 && player == arr[i+3][j] && player == arr[i+6][j]){
                	for(int j = col6; j < 1; j++, col6++){
	                    if(player == '1'){
	                        points1++;
	                        printf("Player 1 earned a point!\n");
	                        printf("Player 2 lost a bin!\n\n");
	                        bin2--;                       
	                    } else {
	                        points2++;
	                        printf("Player 2 earned a point!\n");
	                        printf("Player 1 lost a bin!\n\n");
	                        bin1--;                       
	                    }
	                }
                }
                // Diagonal check (top-left)
                else if(i == 0 && j == 0 && arr[i+1][j+1] == player && arr[i+2][j+2] == player){
                	for(int j = topleft; j < 1; j++, topleft++){
	                    if(player == '1'){
	                        points1++;
	                        printf("Player 1 earned a point!\n");
	                        printf("Player 2 lost a bin!\n\n");
	                        bin2--;
	                    } else {
	                        points2++;
	                        printf("Player 2 earned a point!\n");
	                        printf("Player 1 lost a bin!\n\n");
	                        bin1--;                      
	                    }
	            	}
                }
                // Diagonal check (bottom-right)
                else if(i == 4 && j == 4 && arr[i+1][j+1] == player && arr[i+2][j+2] == player){
                	for(int j = bottomright ; j < 1; j++, bottomright++){
	                    if(player == '1'){
	                        points1++;
	                        printf("Player 1 earned a point!\n");
	                        printf("Player 2 lost a bin!\n\n");
	                        bin2--;
	                    } else {
	                        points2++;
	                        printf("Player 2 earned a point!\n");
	                        printf("Player 1 lost a bin!\n\n");
	                        bin1--;                      
	                    }
	            	}
                }
                // Diagonal check (top-right)
                else if(i ==0 && j == 6 && arr[i+1][j-1] == player && arr[i+2][j-2] == player){
                	for(int j = topright; j < 1; j++, topright++){
	                    if(player == '1'){
	                        points1++;
	                        printf("Player 1 earned a point!\n");
	                        printf("Player 2 lost a bin!\n\n");
	                        bin2--;
	                    } else {
	                        points2++;
	                        printf("Player 2 earned a point!\n");
	                        printf("Player 1 lost a bin!\n\n");
	                        bin1--;                      
	                    }
	            	}
                }
                
                // Diagonal check (bottom-left)
                if(i == 6 && j == 0 && arr[i-1][j+1] == player && arr[i-2][j+2] == player){
                	for(int j = bottomleft; j < 1; j++, bottomleft++){
	                    if(player == '1'){
	                        points1++;
	                        printf("Player 1 earned a point!\n");
	                        printf("Player 2 lost a bin!\n\n");
	                        bin2--;
	                    } else {
	                        points2++;
	                        printf("Player 2 earned a point!\n");
	                        printf("Player 1 lost a bin!\n\n");
	                        bin1--;
	                    }
	            	}
                }
            }
        }
    }
}

int main(){
    // Variables
    char arr[7][7] = {{'*', '-', '-', '*', '-', '-', '*'}, {'-', '*', '-', '*', '-', '*', '-'}, {'-', '-', '*', '*', '*', '-', '-'}, {'*', '*', '*', '-', '*', '*', '*'}, {'-', '-', '*', '*', '*', '-', '-'}, {'-', '*', '-', '*', '-', '*', '-'}, {'*', '-', '-', '*', '-', '-', '*'}};
    int turn = 1;
    int x, y;
    // Game Phase
    while (bin1 != 0 || bin2 != 0){
        if(turn % 2 == 1){
            printf("\n");
            // Printing the board
            board(arr);
            // Player 1 plays
            if(bin1>0){
	            do{
	                printf("\nPlayer 1, please enter coordinates:");
	                scanf("%d %d", &x, &y);
	                if((x < 0 || x > 6) || (y < 0 || y > 6))
	                    printf("Numbers should be in the range of [0,6]\n");
	                else if(arr[x][y] != '*')
	                    printf("You cannot place it at those coordinates, please choose a suitable coordinate.\n");
	                else if(arr[x][y] == '2')
	                    printf("Those coordinates have already been occupied by Player 2. Please try again.\n");               
	            } while((x < 0 || x > 6) || (y < 0 || y > 6) || arr[x][y] != '*');
	            arr[x][y] = '1';
	            bin1--;
        	}
            turn++;
            printf("\n");
        } 
		else {
            printf("\n");
            // Printing the board
			board(arr);
            // Player 2 plays
            if(bin2>0){
				do{
	                printf("\nPlayer 2, please enter coordinates:");
	                scanf("%d %d", &x, &y);
	                if((x < 0 || x > 6) || (y < 0 || y > 6))
	                    printf("Numbers should be in the range of [0,6]\n");
	                else if(arr[x][y] != '*')
	                    printf("You cannot place it at those coordinates, please choose a suitable coordinate.\n");
	                else if(arr[x][y] == '1')
	                    printf("Those coordinates have already been occupied by Player 1. Please try again.\n");
	            } while((x < 0 || x > 6) || (y < 0 || y > 6) || arr[x][y] != '*');
	            arr[x][y] = '2';
	            bin2--;
        }
            turn++;
            printf("\n");
        }
        checkpoints(arr);
        // Printing live score after every turn
        printf("Points: Player 1 => %d, Player 2 => %d\n", points1, points2);
        printf("Player 1's remaining bins: %d, Player2's remaining bins: %d\n", bin1, bin2);
    }
    // Choosing the winner
    DetermineWinner(arr);
    return 0;
}
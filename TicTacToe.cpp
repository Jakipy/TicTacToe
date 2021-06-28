#include <stdio.h>



int gameboard[3][3] = {};

int printboard(){
    for(int x = 1;x<=3;x++){
        for(int y = 1; y <= 3; y++){
            printf("%d",gameboard[x][y]);
        }
        printf("\n");
    }
    return 0;
}

int winner(){
	
}
int main(){
    printboard();
    int playerone = 1;
    int playertwo = 2;
    int state = 1;
    int movex,movey;
    
    for(int i = 0; i<=9; i++){
    	/// for player one updating the board
    	if(state%2!=0){
        	printf("player1's turn");
        	scanf("%d%d",&movex,&movey);
        	state = state + 1;
        if(gameboard[movex][movey] == 0){
            gameboard[movex][movey] = playerone;
            printboard();
        }
        else{}{
            printf("this square is already filled");
            state = state - 1;
        }

    }	/// for player one updating the board
		if(state%2!=0){
    		printf("player2's turn");
        	scanf("%d%d",&movex,&movey);
        	state = state +1;
        if(gameboard[movex][movey] == 0){
            gameboard[movex][movey] = playertwo;
            printboard();
        }
        else{}{
            printf("this square is already filled");
            state = state - 1;
        }
		}
        
    }
	
    
    
}

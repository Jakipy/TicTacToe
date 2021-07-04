#include <stdio.h>

int gameboard[3][3] = {};
int condition = 0;

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
	for(int x = 0; x < 3; x++){
		for(int y = 0; y < 3; y++){
			if(gameboard[x][y] == 1){ // vertically
				condition = 1;
			
			}
			if(gameboard[x][y] == 2){ // horizontally
				condition = 2;
			}
			else{
				if(gameboard[1][1] && gameboard[1][2] && gameboard[1][3] == 1 ){ // diagonally 
					condition = 1;
				}
				else if(gameboard[3][1] && gameboard[3][2] && gameboard[3][3] == 1 ){ // diagonally
					condition = 1;
				}
				else if(gameboard[1][1] && gameboard[1][2] && gameboard[1][3] == 2 ){ // diagonally
					condition = 2;
				}
				else if(gameboard[3][1] && gameboard[3][2] && gameboard[3][3] == 2 ){
					condition = 2;
				}
				else{
					condition = 0;
				}
				
			}
		}
	}
	
	
		
		
	
	printf("%d,wins",condition);
	
}
int main(){
    printboard();
    int playerone = 1;
    int playertwo = 2;
    //int state = 1;
    int movex,movey;
    int i = 9;
    while(i--){
    	if(condition != 0){
    		printf("/n%d winner is ",condition);
		}
		
		else{
			if(i%2!=0){
        		printf("player1's turn");
        		scanf("%d%d",&movex,&movey);
        		i = i + 1;
        	if(gameboard[movex][movey] == 0){
            	gameboard[movex][movey] = playerone;
          		//winner();
            	printboard();
        	}
        	else{}{
            	printf("this square is already filled");
            	i = i - 1;
            	
            
        }
        		/// for player one updating the board
			if(i%2!=0){
    			printf("player2's turn");
        		scanf("%d%d",&movex,&movey);
        		i = i +1;
        	if(gameboard[movex][movey] == 0){
            	gameboard[movex][movey] = playertwo;
         	    //winner();
            	printboard();
        	}
        	else{}{
            	printf("this square is already filled");
            	i = i - 1;
       		}
			}
	}
}
}
}

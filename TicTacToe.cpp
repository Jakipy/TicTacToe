#include<stdio.h>
int winner = 0;
int board[3][3] = {{0,0,0},
                   {0,0,0},
                   {0,0,0}};
int count = 9;

int print(){
  for(int x = 0;x<3;x++){
    for(int y = 0; y < 3; y++){
      printf("%d",board[x][y]);
    }
    printf("\n");
  }
  return 0;

}

int checkwinner(){
  //vertically
  if(board[0][0] == board[0][1] && board[0][1] == board[0][2] && board[0][0] != 0){
    winner = board[0][0];
    printf("player %d wins",winner);
  }
  else if(board[1][0] == board[1][1] && board[1][1] == board[1][2] && board[1][0] != 0){
    winner = board[1][0];
    printf("player %d wins",winner);
  }
  
  else if(board[2][0] == board[2][1] && board[2][1] == board[2][2] && board[2][0] != 0){
    winner = board[2][0];
    printf("player %d wins",winner);
  
  }
  else{
    // diagonal
    if(board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != 0){
      winner = board[0][0];
      printf("player %d wins",winner);
    }
    if(board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[0][2] != 0){
      winner = board[0][2];
      printf("player %d wins",winner);
    }
    if(count == 0 && winner == 0){
       printf("tie game");
    }
      //printf("tie game");
    
  
	
}
}

int main(){

  printf("[0][0],[0][1],[0][2]");
  printf("\n[1][0],[1][1],[1][2]");
  printf("\n[2][0],[2][1],[2][2]");
  int playerone = 1;
  int playertwo = 2;
  
  int x,y;
  while(count--){
    if(count%2 != 0){
      printf("\n playertwo's turn");
      scanf("%d%d",&x,&y);
      if(board[x][y] == 0){
        board[x][y] = 2;
        print();
        checkwinner();
        if(winner != 0){
        	break;
		}
      }
      else{
        printf("\n this square is already filled");
        count++;
      }
    }
    if(count%2 == 0){
      printf("\n playerone's turn");
      scanf("%d%d",&x,&y);
      if(board[x][y] == 0){
        board[x][y] = 1;
        print();
        checkwinner();
        if(winner != 0){
        	break;
		}
      }
      else{
        printf("\n this square is already filled");
        count++;
      }
    }
  }
  
  
}

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "bingoBoard.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	srand((unsigned)time(NULL));
	
	//opening
	printf("==================================================\n");
	printf("**************************************************\n");
	printf("                  BINGO GAME                      \n");
	printf("**************************************************\n");
	printf("==================================================\n\n\n");
	
	//game
	bingo_init();
	bingo_print();
	bingo_inputNum(21);
	bingo_print();
	
	//initialize bingo board 일단 빙고보드부터 만들기 
	
	
	/*
	while (game is not end) 반복하려고 while문 사용/ 게임이 끝나면 반복문을 빠져나감.// 줄 수가 N_BINGO보다 작음 
	{
	   //bingo board print
	   
	   //print no. of completed lines
	   
	   //select a number -> main함수에서 직접 구현할것임 
	   
	   //update the board status //보드 상태 업데이트 
    }
	
	*/
	
	//ending
	printf("\n\n\n\n\n\n\n\n\n\n");
	printf("==================================================\n");
	printf("**************************************************\n");
	printf("               CONGRATULATION!!!!!                \n");
	printf("                    BINGO!!!!!                    \n");
	printf("                   YOU WIN!!!!!                   \n");
	printf("**************************************************\n");
	printf("==================================================\n\n\n");
	
	
	
	
	
	
	
	return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "bingoBoard.h"

#define BINGO_RES_UNFINSHED   -1
#define BINGO_RES_FINSHED      0

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int check_gameEnd(void)
{
	int res = BINGO_RES_UNFINSHED;
	if(bingo_countCompletedLine() >= N_LINE){
		res = BINGO_RES_FINSHED;
	}
	
	return res;
}

int get_number(void)
{
	int selNum = 0;
	do{
		printf("select a number : ");
		scanf("%d", &selNum);
		fflush(stdin);
		
		if(selNum < 1 || selNum > N_SIZE*N_SIZE || bingo_checkNum(selNum) == BINGO_NUMSTATUS_ABSENT)
		{
			printf("%i is not on the board! select other one.\n", selNum);
		}
		
	} while(selNum < 1 || selNum > N_SIZE*N_SIZE || bingo_checkNum(selNum) == BINGO_NUMSTATUS_ABSENT);
	
	return selNum;
}

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
	
	//initialize bingo board 일단 빙고보드부터 만들기 
	while(check_gameEnd() == BINGO_RES_UNFINSHED)
	{
		bingo_print();
		
		printf("No. of completed line : %i\n", bingo_countCompletedLine());
		
		int selNum = get_number();
		
		bingo_inputNum(selNum);
	}
	
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

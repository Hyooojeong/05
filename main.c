#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

	int answer = 32;
	int num;
	int trial = 0; 
	
	do{
		//1. input
		printf("Guess a number : ");
		scanf("%d", &num);
		
		//2. decision (low/high) *wrong answer
		if(num<answer)
		  printf("high!\n");
		else if(num>answer)
		  printf("low!\n");
		
		trial++;
	} while(num!=answer); //3. loop condition :
	
	printf("Congratulation! trial : %d\n", trial);
	
	system("PAUSE");
	return 0;
}

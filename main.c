#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int num;
	
	printf("정수 하나를 입력하시오 : ");
	scanf("%d", &num);
	
	if (num >= 0)
	printf("절대값은 %d입니다.", num);
	
	else
	printf("절대값은 %d입니다.", abs(num));
	
	return 0;
}

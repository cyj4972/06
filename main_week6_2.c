#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int factorial(int n)
{
	int i;
	int result = 1;
	for(i = 1; i<=n; i++)
	{
		result*= i;
	}
	return result;
}

int combination(int n, int r)
{
	//2.분모/분자 계산
	int div1, div2;		//분자, 분모
	div1 = factorial(n);	//n!
	div2 = factorial(n - r) * factorial(r);		//(n-r)!*r!
	
	return(div1/div2); 
}
int main(int argc, char *argv[]) {
	//1. 입력값 받음
	int n, r;
	int result;
	
	printf("input n : ");
	scanf("%d", &n);
	printf("input r : ");
	scanf("%d", &r);
	
	//3. 최종 값 출력
	result = combination(n, r);
	printf("result is %d", result);
	
	system("PAUSE"); 
	return 0;
}

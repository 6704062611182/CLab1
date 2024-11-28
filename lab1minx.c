#include <stdio.h>
int main(){
	int a, b;
	scanf("%d %d", &a, &b);
	int sum;
	if (a > b){
		printf("a > b \n");
		sum = a - b;
		printf("%d", sum);
	}else{
		printf("b > a \n");
		sum = b - a;
		printf("%d", sum);
	}
}

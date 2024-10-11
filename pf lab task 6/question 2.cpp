#include<stdio.h>
int main(){
	int num, i;
	printf("enter an integer");
	scanf("%d", &num);
	printf("The even numbers till %d are:\n", num);
	for(i=2; i<=num;){
		printf(" %d\n", i);
		i = i+2;
	}
}
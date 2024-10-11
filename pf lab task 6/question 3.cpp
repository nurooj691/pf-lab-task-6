#include<stdio.h>
int main(){
	int num;
		do{
			printf("enter a positive number");
			scanf("%d", &num);
			
		} while(num <= 0); 	
		printf("%d", num);
	
}
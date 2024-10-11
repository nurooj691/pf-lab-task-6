#include<stdio.h>
int main(){
	int num, isprime = 1;
	printf("enter a number");
	scanf("%d", &num);
	if(num<=1){
		printf("%d is not a prime number",num);
	}
	else{
	
	for(int i=2; i<num; i++){
		if(num%i == 0)
		isprime = 0;
		
	}
	if(isprime==0){
		printf("%d is not a prime number", num);
	}
	else{
		printf("%d is a prime number", num);
	}
}
	
}
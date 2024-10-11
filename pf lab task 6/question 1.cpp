#include<stdio.h>
int main(){
    int i , fac = 1, num;
    printf("enter a number");
    scanf("%d", &num);
    if(num<0){
    	printf("invalid input");
    	
	}
	else{
		for(i=1; i<=num; i++){
		fac = fac*i;
	}
		printf("factorial of %d is %d", num, fac);
		
	}
}
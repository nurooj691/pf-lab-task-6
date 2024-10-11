#include <stdio.h>
    void isarmstrong(int num) {
    int originalnum = num, remainder, result = 0;
    while (num != 0) {
        remainder = num % 10; 
        result += remainder * remainder * remainder; 
        num /= 10; 
    }  
    printf("%d is the sum of the cubes of the digits of %d.\n", result, originalnum);  
    if (result == originalnum) {
        printf("%d is an Armstrong number.\n", originalnum);
    } else {
        printf("%d is not an Armstrong number.\n", originalnum);
    }
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    isarmstrong(num); 
    return 0; 
}

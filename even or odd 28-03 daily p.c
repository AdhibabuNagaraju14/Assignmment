
#include <stdio.h>
int main() {
    int num1,num2;
    printf("Enter a number:");
    scanf("%d", & num1);
    printf("enter a number :");
    scanf("%d", &num2);
    if(num1%2 == 0 && num2%2== 0)
        printf("%d %d  is even.",num1);
    else
        printf("%d %d is odd.",num1);
    
    return 0;
}

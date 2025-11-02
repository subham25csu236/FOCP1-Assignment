/* Q3Design a C program to subtract two integers without using the minus (-) operator, applying
bitwise operators. Highlight how such logic can be used in low-level arithmetic operations in
embedded systems or processors*/
#include<stdio.h>
int main (){
    int a , b , result ;
    printf("Enter first number : ");
    scanf("%d",&a);
    printf("Enter second number : ");
    scanf("%d",&b);
    result = a + (~b + 1);
    printf("Subtraction of %d and %d is %d",a,b,result);
    return 0;
}

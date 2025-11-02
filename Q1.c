//Q1Develop a C program to check whether a given number is an Armstrong number or not
#include<stdio.h>
#include<math.h>
int main (){
    int num , dgt , sum = 0 , abc ;
    printf("Enter any number : ");
    scanf("%d",&num);
    abc = num;
    while(abc>0){
        dgt = abc % 10;
        sum = sum + pow(dgt,3);
        abc = abc / 10;
    }
    if(sum == num){
        printf("%d is an Armstrong number",num);
    }
    else{
        printf("%d is not an Armstrong number",num);
    }
    return 0;
}

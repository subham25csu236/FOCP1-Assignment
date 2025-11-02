/*Q7. Develop a C program to print a binary pyramid pattern.
0 0
01 01
010 010
0101 0101
0101001010*/
//Develop a C program to print a binary pyramid pattern
#include<stdio.h>
int main (){
    int n ;
    printf("Enter number of rows : ");
    scanf("%d",&n);
    for(int i = 1 ; i <= n ; i+=1){
        for(int j = 1 ; j <= i ; j+=1){
            printf("%d",j%2);
        }
        printf(" ");
        for(int j = 1 ; j <= i ; j+=1){
            printf("%d",j%2);
        }
        printf("\n");
    }
    return 0;
}

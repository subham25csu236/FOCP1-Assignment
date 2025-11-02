/*. Q8 Develop a C program to generate the Fibonacci series up to ‘n’ terms, where each term is the
sum of the two preceding ones.
0, 1, 1, 2, 3, 5, 8, 13, ...
*/
//Develop a C program to generate the Fibonacci series up to n terms
#include<stdio.h>
int main (){
    int n , first = 0 , second = 1 , next ;
    printf("Enter number of terms : ");
    scanf("%d",&n);
    printf("Fibonacci Series : ");
    for(int i = 1 ; i <= n ; i+=1){
        printf("%d ",first);
        next = first + second;
        first = second;
        second = next;
    }
    return 0;
}

//Q11 . Develop a C program to traverse an array of scores, determine whether each score is even or
//odd using conditional logic, and store them into two separate arrays — even_array and odd_array
// Develop a C program to traverse an array of scores,
// determine whether each score is even or odd using conditional logic,
// and store them into two separate arrays — even_array and odd_array.
//Q11. Develop a C program to traverse an array of scores, determine whether each score is even or
//odd using conditional logic, and store them into two separate arrays — even_array and odd_array
#include<stdio.h>
int main (){
    int a , evencount=0 , oddcount=0 ;
    printf("Enter total number of scores : ");
    scanf("%d",&a);
    int score[a] , evenarray[a] , oddarray[a];
    for(int i = 0 ; i<a ; i+=1){
        printf("Enter score %d : ",i+1);
        scanf("%d",&score[i]);
    }
    for(int i = 0 ; i<a ; i+=1){
        if(score[i]%2==0){
            evenarray[evencount]=score[i];
            evencount+=1;
        }
        else{
            oddarray[oddcount]=score[i];
            oddcount+=1;
        }
    }
    printf("Even scores : ");
    for(int i = 0 ; i<evencount ; i+=1){
        printf("%d\n",evenarray[i]);
    }
    printf("\nOdd scores : ");
    for(int i = 0 ; i<oddcount ; i+=1){
        printf("%d\n",oddarray[i]);
    }
    return 0;
}

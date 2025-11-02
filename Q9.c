//Q9 . Design a C program to find the first occurrence of the score “99” in an array, focusing on linear
//search and data retrieval techniques
#include<stdio.h>
int main (){
    int a , flag=0 ;
    printf("Enter total number of scores : ");
    scanf("%d",&a);
    int score[a];
    for(int i = 0 ; i<a ; i+=1){
        printf("Enter score %d : ",i+1);
        scanf("%d",&score[i]);
    }
    for(int i = 0 ; i<a ; i+=1){
        if(score[i]==99){
            printf("First occurence of score 99 is at the score %d ie array = score[%d]",i+1,i);
            flag=1;
            break;
        }
    }
    if(flag==0){
        printf("Score 99 not found");
    }
    return 0;
}

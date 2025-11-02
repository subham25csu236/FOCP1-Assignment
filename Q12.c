/*Q12. Develop a C program to find the maximum and minimum scores in an array, applying
comparative logic for ranking and analysis*/
#include<stdio.h>
int main (){
    int a , max , min ;
    printf("Enter total number of scores : ");
    scanf("%d",&a);
    int score[a];
    for(int i = 0 ; i<a ; i+=1){
        printf("Enter score %d : ",i+1);
        scanf("%d",&score[i]);
    }
    max=score[0];
    min=score[0];
    for(int i = 0 ; i<a ; i+=1){
        if(score[i]>max){
            max=score[i];
        }
        if(score[i]<min){
            min=score[i];
        }
    }
    printf("Maximum score is %d\n",max);
    printf("Minimum score is %d",min);
    return 0;
}

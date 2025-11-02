//Q10. Implement a program to find who and how many students scored “99” in the marks array,
//emphasising data scanning and frequency counting
#include <stdio.h>
int main (){
    int a , count = 0 ;
    printf("Enter total number of scores : ");
    scanf("%d",&a);
    int score[a];
    for(int i = 0 ; i<a ; i+=1){
        printf("Enter score of student %d : ",i+1);
        scanf("%d",&score[i]);
    }
    printf("Students who scored 99 are as follows :\n");
    for(int i = 0 ; i<a ; i+=1){
        if(score[i]==99){
            printf("Student %d scored 99\n",i+1);
            count++;
        }
    }
    if(count==0){
        printf("No student scored 99");
    }
    else{
        printf("Total number of students who scored 99 are : %d\n",count);
    }
    return 0;
}

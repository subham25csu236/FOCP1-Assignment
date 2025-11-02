// Q13 . Design a C program to find a peak element that is not smaller than its neighbours
#include<stdio.h>
int main (){
    int a ;
    printf("Enter total number of elements : ");
    scanf("%d",&a);
    int arr[a];
    for(int i = 0 ; i<a ; i+=1){
        printf("Enter element %d : ",i+1);
        scanf("%d",&arr[i]);
    }
    for(int i = 0 ; i<a ; i+=1){
        if((i==0 || arr[i]>=arr[i-1]) && (i==a-1 || arr[i]>=arr[i+1])){
            printf("Peak element is %d at position %d",arr[i],i+1);
            break;
        }
    }
    return 0;
}

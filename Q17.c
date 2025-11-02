//Q17. Design a C program to delete an element from the front, middle, or end of an array, and print
//the array before and after deletion
#include<stdio.h>
int main (){
    int a , abc ;
    printf("Enter total number of elements : ");
    scanf("%d",&a);
    int arr[a];
    for(int i = 0 ; i<a ; i+=1){
        printf("Enter element %d : ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("Enter position to delete (1 for front, %d for end) : ",a);
    scanf("%d",&abc);
    for(int i = abc-1 ; i<a-1 ; i+=1){
        arr[i]=arr[i+1];
    }
    printf("Array after deletion : ");
    for(int i = 0 ; i<a-1 ; i+=1){
        printf("%d ",arr[i]);
    }
    return 0;
}

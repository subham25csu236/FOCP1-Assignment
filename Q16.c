//Q16. Implement a C program to insert an element at the front, middle, or end of an array, and print
//the array before and after insertion
#include<stdio.h>
int main (){
    int a , abc , def ;
    printf("Enter total number of elements : ");
    scanf("%d",&a);
    int arr[a+1];
    for(int i = 0 ; i<a ; i+=1){
        printf("Enter element %d : ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("Enter position to insert (1 for front, %d for end) : ",a+1);
    scanf("%d",&abc);
    printf("Enter value to insert : ");
    scanf("%d",&def);
    for(int i = a ; i>=abc ; i-=1){
        arr[i]=arr[i-1];
    }
    arr[abc-1]=def;
    printf("Array after insertion : ");
    for(int i = 0 ; i<=a ; i+=1){
        printf("%d ",arr[i]);
    }
    return 0;
}

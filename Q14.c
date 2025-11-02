// Q14. Develop a C program to count the number of prime numbers in an array.
#include<stdio.h>
int main (){
    int a , count=0 ;
    printf("Enter total number of elements : ");
    scanf("%d",&a);
    int arr[a];
    for(int i = 0 ; i<a ; i+=1){
        printf("Enter element %d : ",i+1);
        scanf("%d",&arr[i]);
    }
    for(int i = 0 ; i<a ; i+=1){
        int flag=0;
        if(arr[i]<=1){
            continue;
        }
        for(int j = 2 ; j<=arr[i]/2 ; j+=1){
            if(arr[i]%j==0){
                flag=1;
                break;
            }
        }
        if(flag==0){
            count+=1;
        }
    }
    printf("Total number of prime numbers in array = %d",count);
    return 0;
}

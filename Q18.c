/*Q18. Develop a program to identify and print duplicate elements in an array, or print “-1” if no
duplicates exist, applying frequency detection and data validation.
Examples:
Input: {2, 10,10, 100, 2, 10, 11,2,11,2}
Output: 2 10 11
Input: {5, 40, 1, 40, 100000, 1, 5, 1}
Output: 5 40 1
*/
#include<stdio.h>
int main (){
    int a , found=0 ;
    printf("Enter total number of elements : ");
    scanf("%d",&a);
    int arr[a];
    for(int i = 0 ; i<a ; i+=1){
        printf("Enter element %d : ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("Duplicate elements are : ");
    for(int i = 0 ; i<a ; i+=1){
        for(int j = i+1 ; j<a ; j+=1){
            if(arr[i]==arr[j]){
                int flag=0;
                for(int k = 0 ; k<i ; k+=1){
                    if(arr[k]==arr[i]){
                        flag=1;
                        break;
                    }
                }
                if(flag==0){
                    printf("%d ",arr[i]);
                    found=1;
                }
                break;
            }
        }
    }
    if(found==0){
        printf("-1");
    }
    return 0;
}

// shorting of arrey


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int arr[5];
    int n=5;
    printf("Enter 5 integers: ");
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-i-1; j++){
            if(arr[j]>arr[j+1]){
                 int temp=arr[j];
                 arr[j]=arr[j+1];
                 arr[j+1]=temp;
            }
        }
    }
    printf("Sorted array: ");
    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
}

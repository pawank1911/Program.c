#include <stdio.h>

 void swap(int *a, int *b){
    int temp= *a;
    *a=*b;
    *b=temp;
 }

 int partition(int arr[], int st, int end){
    int index= st-1;
    int pivot=arr[end];

    for(int j=st; j<end; j++){
            if(arr[j]>=pivot){
                index++;
                swap(&arr[j], &arr[index]);
            }
    }
        index++;
        swap(&arr[index], &arr[end]);
        return index;
 }

 void quicksort(int arr[], int st, int end){
    if(st<end){
        int pi=partition(arr,st,end);

        quicksort(arr, st,pi-1);
        quicksort(arr, pi+1, end);
    }
 }

 void printarrar(int arr[], int size){

    for(int i=0; i<size; i++){
        printf(" %d",arr[i]);
    }
}

int main(){
    int arr[]={12,43,62, 84, 24 };
    int n=sizeof(arr)/sizeof(arr[0]);

    quicksort(arr, 0, n-1);

    printf("sorted arrar : \n");

    printarrar(arr,n);

    
}
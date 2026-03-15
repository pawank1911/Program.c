  #include<stdio.h>
 #include<stdlib.h>

 int main(){

    int n , target ;
    
    printf(" enter the lenght of arrey :");
    scanf("%d", &n);
    int arr[n];

    printf(" enter the number in arrey :");
    for(int i=0 ; i<n ; i++){
        scanf("%d",&arr[i]);
    }

     int found = 0;

    printf(" enter the target :");
    scanf("%d",&target);

    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(arr[i] + arr[j] ==target){
                printf("[%d %d] \n", i, j);
                found = 1;
            } 
        }if(found == 0){
        printf("No pair found");
    }
    return 0;
}

 

//  number to binary

#include <stdio.h>

int main(void) {
    int n , i=0;
    int binary[32];  
    printf("Enter a positive integer: ");
    scanf("%d", &n);


    if(n==0){
        printf(" binary: 0\n");
    }else{
        while(n>0){
            binary[i]=n%2;
            n/=2;
             i++;   
        }

        for(int j=i-1; j>=0; j--){
            printf("%d", binary[j]);
        }
         printf("\n");
    }
    return 0;
}
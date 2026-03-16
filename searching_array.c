// searching in arrey

#include <stdio.h>

int main() {
    int arr[] = {10, 25, 30, 45, 50};
    int n = 5;
    int key, i, found = 0;

    printf("Enter element to search: ");
    scanf("%d", &key);

    for(i = 0; i < n; i++) {
        if(arr[i] == key) {
            printf("Element found at position %d", i + 1);
            found = 1;
            break;
        }
    }

    if(found == 0)
        printf("Element not found");

    return 0;
}
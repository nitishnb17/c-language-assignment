#include <stdio.h>

int main() {
    int arr[4] = {1, 2, 3, 4};
    int n = 4; 
    int k = 3; 
    int i, j, temp;

    
    k = k % n;

    
    for(j = 0; j < k; j++) {
        temp = arr[n - 1]; 
        for(i = n - 1; i > 0; i--) {
            arr[i] = arr[i - 1]; 
        }
        arr[0] = temp; 
    }

    printf("Array after right shift by %d:\n", k);
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}

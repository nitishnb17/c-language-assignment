#include <stdio.h>

int main() {
    int arr[100], n, i;
    printf("Enter number of elements (max 99): ");
    scanf("%d", &n);

    
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

   
    int smallest = arr[0], largest = arr[0];
    for(i = 1; i < n; i++) {
        if(arr[i] < smallest) smallest = arr[i];
        if(arr[i] > largest) largest = arr[i];
    }

    
    int second_smallest = largest;
    for(i = 0; i < n; i++) {
        if(arr[i] > smallest && arr[i] < second_smallest) {
            second_smallest = arr[i];
        }
    }

  
    int second_largest = smallest;
    for(i = 0; i < n; i++) {
        if(arr[i] < largest && arr[i] > second_largest) {
            second_largest = arr[i];
        }
    }

   
    if(second_smallest == largest)
        printf("No second smallest element\n");
    else
        printf("Second smallest element: %d\n", second_smallest);

    if(second_largest == smallest)
        printf("No second largest element\n");
    else
        printf("Second largest element: %d\n", second_largest);

    return 0;
}

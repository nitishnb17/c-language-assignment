#include <stdio.h>

int main() {
    int n, i;
    int max, min, a[100];
    scanf("%d", &n);
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);
    max = min = a[0];
    for(i = 1; i < n; i++) {
        if(a[i] > max)
            max = a[i];
        if(a[i] < min)
            min = a[i];
    }
    printf("%d %d", max, min);
    return 0;
}

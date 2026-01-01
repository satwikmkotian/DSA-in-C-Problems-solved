
#include <stdio.h>
int main() {
    int arr[] = {3, 5, 1, 9, 2};
    int n = 5;
    int max = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] > max)
            max = arr[i];
    }

    printf("Maximum element = %d\n", max);
    return 0;
}

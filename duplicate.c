#include <stdio.h>

int main() {
    int n, count = 0;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n], freq[n];


    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        freq[i] = -1;
    }

    for (int i = 0; i < n; i++) {
        int duplicateCount = 1;
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                duplicateCount++;
                freq[j] = 0;
            }
        }
        if (freq[i] != 0) {
            freq[i] = duplicateCount;
        }
    }

    for (int i = 0; i < n; i++) {
        if (freq[i] > 1) {
            printf("\nTotal number of %d = %d\n", arr[i],freq[i]);
            count++;
        }
    }

    printf("\nTotal number of duplicate elements: %d\n", count);

    return 0;
}

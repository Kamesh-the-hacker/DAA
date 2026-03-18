#include <stdio.h>

int main() {
    int arr[] = {2, 4, 6, 8, 10, 12};
    int n = 6;
    int key = 8;

    int low = 0, high = n - 1, mid;

    while (low <= high) {
        mid = (low + high) / 2;

        if (arr[mid] == key) {
            printf("Element found at index %d", mid);
            return 0;
        }
        else if (arr[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }

    printf("Element not found");
    return 0;
}

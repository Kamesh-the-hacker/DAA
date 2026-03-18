#include <stdio.h>

void minmax(int a[], int l, int h, int *min, int *max) {
    int mid, min1, max1, min2, max2;

    if (l == h)
        *min = *max = a[l];
    else if (l == h - 1) {
        if (a[l] < a[h]) {
            *min = a[l];
            *max = a[h];
        } else {
            *min = a[h];
            *max = a[l];
        }
    } else {
        mid = (l + h) / 2;
        minmax(a, l, mid, &min1, &max1);
        minmax(a, mid + 1, h, &min2, &max2);
        *min = (min1 < min2) ? min1 : min2;
        *max = (max1 > max2) ? max1 : max2;
    }
}

int main() {
    int a[] = {3, 5, 1, 8, 2, 9}, min, max;
    minmax(a, 0, 5, &min, &max);
    printf("Min=%d Max=%d", min, max);
}

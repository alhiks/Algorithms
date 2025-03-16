#include <stdio.h>

void swap(int *a, int *b) {
    int t = *a;
    *a = *b;
    *b = t;
}

int partition(int a[], int l, int h) {
    int pivot = a[l]; 
    int i = l, j = h;

    while (i < j) {
        while ( i < h && a[i] <= pivot )
        {
            i++;
        } 
        while ( j > l && a[j] > pivot)
        {
            j--;
        }

        if (i < j) {
            swap(&a[i], &a[j]);
        }
    }
    swap(&a[l], &a[j]);
    return j;
}

void quicksort(int a[], int l, int h) {
    if (l < h) {
        int part = partition(a, l, h);
        quicksort(a, l, part-1);
        quicksort(a, part + 1, h);
    }
}

int main() {
    int a[100], n, i;
    
    printf("Enter size of array: ");
    scanf("%d", &n);
    
    printf("Enter elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    quicksort(a, 0, n - 1);

    printf("Sorted Elements:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}

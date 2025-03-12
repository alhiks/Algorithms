#include <stdio.h>

void print(int a[], int n)
{
    printf("Sorted elements are:\n");
    for (int i = 0; i < n; i++)
        printf("Element: %d\n", a[i]);
}

void merge(int a[], int l, int mid, int h)
{
    int i = l, j = mid + 1, k = l;
    int c[100];

    while (i <= mid && j <= h)
    {
        if (a[i] < a[j])
        {
            c[k++] = a[i++];
        }
        else
        {
            c[k++] = a[j++];
        }
    }

    // Copy remaining elements
    while (i <= mid)
    {
        c[k++] = a[i++];
    }

    while (j <= h)
    {
        c[k++] = a[j++];
    }

    // Copy merged data back to original array
    for (int p = l; p <= h; p++)
    {
        a[p] = c[p];
    }
}

void mergesort(int a[], int l, int h)
{
    if (l < h)
    {
        int mid = l + (h - l) / 2;
        mergesort(a, l, mid);
        mergesort(a, mid + 1, h);
        merge(a, l, mid, h);
    }
}

int main()
{
    int a[10], i, n, l = 0;
    printf("Enter no. of elements: ");
    scanf("%d", &n);

    printf("Enter elements of array: ");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    mergesort(a, l, n - 1);

    print(a, n);

    return 0;
}

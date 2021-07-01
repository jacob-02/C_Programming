#include <stdio.h>

int binarySearch(int arr[], int l, int r, int x);

int main()
{
    int a[100], key, n =0;

    FILE *fp = fopen("numbers.txt", "r");

    while (fscanf(fp, "%d", &a[n]) != EOF)
    {
        n++;
    }

    fclose(fp);
    
    int x;

    printf("Enter the number to be searched\n");
    scanf("%d", &x);

    int result = binarySearch(a, 0, n - 1, x);

    (result == -1) ? printf("Element is not present in array\n")
                   : printf("Element is present at index %d\n",
                            result);
}

int binarySearch(int arr[], int l, int r, int x)
{
    if (r >= l)
    {
        int mid = l + (r - l) / 2;

        if (arr[mid] == x)
            return mid;

        if (arr[mid] > x)
            return binarySearch(arr, l, mid - 1, x);

        return binarySearch(arr, mid + 1, r, x);
    }

    return -1;
}
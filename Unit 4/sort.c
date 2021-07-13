#include <stdio.h>

int binarySearch(int a[], int start, int end, int key)
{
    int pos = 1, found = 0, mid;

    while (start <= end && found == 0)
    {
        mid = (start + end) / 2;

        if (a[mid] == key)
        {
            pos = mid;
            found = 1;
        }

        else if (key < mid)
        {
            end = mid - 1;
        }

        else
            start = mid + 1;
    }

    return pos;
}

int main()
{
    int a[10], key;

    printf("Enter the 10 digits to sort using binary search\n");

    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter the value to be searched\n");
    scanf("%d", &key);

    int pos = binarySearch(a, 0, 9, key);

    printf("%d\n", pos);
    if (pos == 1)
    {
        printf("THE ELEMENT IS FOUND\n");
    }

    else
    {
        printf("ELEMENT DOES NOT EXIST\n");
    }
}
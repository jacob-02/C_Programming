#include <stdio.h>

int main()
{
    int a[10][10], m, n;
    printf("The number of rows\n");
    scanf("%d", &m);

    printf("The number of columns\n");
    scanf("%d", &n);

    read(n, a, m);

    // for(int i = 0; i < m; i++)
    //     for(int j = 0; j < n; j++)
    //         scanf("%d", &a[i][j]);
}

void read(int n, int (*a)[n], int m)
{
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
            scanf("%d ", &a[i][j]);
    }

    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
            printf("%d ", a[i][j]);
        
        printf("%d\n");
    }
}
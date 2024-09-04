#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr, i, sum = 0;
    int n = 5;
    ptr = (int *)malloc(n * sizeof(int));
    printf("Enter element: ");
    for (i = 0; i < n; ++i)
    {
        scanf("%d", ptr + i);
        sum += *(ptr + i);
    }
    for (i = 0; i < n; ++i)
    {
        printf("%d", ptr[i]);
    }
    printf("Sum=%d", sum);
    free(ptr);
    return 0;
}
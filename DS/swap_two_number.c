#include <stdio.h>
void swap(int, int);
void _swap(int *, int *);
int main()
{
    int n1 = 10, n2 = 14;
    int *_n1 = &n1, *_n2 = &n2;
    printf("Before: swap using call by value\n");
    printf("N1 = %d AND N2 = %d", n1, n2);
    swap(n1, n2);
    printf("\nAfter: swap using call by value\n");
    printf("N1 = %d AND N2 = %d", n1, n2);

    printf("\n--------------------------------------------\n");
    printf("Before: swap using call by Reference\n");
    printf("N1 = %d AND N2 = %d", *_n1, *_n2);
    _swap(_n1, _n2);
    printf("\nAfter: swap using call by Reference\n");
    printf("N1 = %d AND N2 = %d", *_n1, *_n2);
}
void swap(int _n1, int _n2)
{
    _n1 = _n1 + _n2;
    _n2 = _n1 - _n2;
    _n1 = _n1 - _n2;
}
void _swap(int *_n1, int *_n2)
{
    *_n1 = *_n1 + *_n2;
    *_n2 = *_n1 - *_n2;
    *_n1 = *_n1 - *_n2;
}
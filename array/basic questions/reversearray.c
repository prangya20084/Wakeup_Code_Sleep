#include <stdio.h>
int main()
{
    int array[100], n, c, t, end;
    printf("enter the size of array:\n");
    scanf("%d", &n);
    end = n - 1;
    printf("enter the elements in to the array:\n");
    for (c = 0; c < n; c++) {
        scanf("%d", &array[c]);
    }
    printf("the given array:\n");
    for (c = 0; c < n; c++) {
        printf("%d", array[c]);
    }
    
    for (c = 0; c < n/2; c++) {
        t = array[c];
        array[c] = array[end];
        array[end] = t;    
        end--;
    }
    
    printf("\nReversed array elements are:\n");
    
    for (c = 0; c < n; c++) {
        printf("%d\n", array[c]);
    }
    
    return 0;
}
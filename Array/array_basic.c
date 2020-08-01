/* Array ADT - Udemy Abdul Bari */

#include <stdio.h>
#include <stdlib.h>

struct Array
{
    int *A;
    int size;
    int length;
};

void  DisplayArray(struct Array *arr) {
    int i=0;
    for(i=0; i<arr->length; i++) {
        printf("%d ", arr->A[i]);
    }
    printf("\n");
}
int main(void)
{
    struct Array arr;
    int i,n;
    printf("Enter size of an array:");
    scanf("%d", &arr.size);
    arr.A = (int *)malloc(arr.size*sizeof(int));
    arr.length = 0;

    printf("Enter the number of numbers:");
    scanf("%d", &n);
    arr.length=n;

    printf("Enter all Elements\n");
    for(i=0; i<n; i++) {
        scanf("%d", &(arr.A[i]));
    }
    
    DisplayArray(&arr);

}    

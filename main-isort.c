#include <stdio.h>
#include "insertion.h"
#define LENGTH 5
int main(){
    int num = 0;
    int arr[LENGTH];
    for (int i = 0; i < LENGTH; i++)
    {
        scanf("%d",arr+i);
    }
    insertion_sort(arr,LENGTH);

    for (int i = 0; i < LENGTH-1; i++)
    {
        printf("%d,",*(arr+i));
    }
    printf("%d",*(arr+LENGTH-1));
    return 0;
}
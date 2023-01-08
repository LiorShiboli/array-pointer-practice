#include <stdio.h>
void shift_element(int* arr, int i){
    for (int j = i ; j > 0 ; j--)
    {
        *(arr + j) = *(arr +j-1);

    }

}
void insertion_sort(int* arr, int len){

    for (int i = 1; i < len; i++)
    {
        int j = 0;
        int temp = 0;
        while (*(arr+j)<*(arr+i)&&i>j)
        {
            j++;
        }
        temp = *(arr+i);

        shift_element(arr+j,i-j);
        *(arr+j) = temp;

    }

}
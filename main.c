#include <stdio.h>
#include <stdlib.h>

#define SIZE 10


int main()
{
    int arr [SIZE] = {2,5,6,99,8,65,9,13,12,1}, i, j, temp;

    for (i=0; i<SIZE; i++)
    {
        printf("%4i",arr[i]);
    }

    for (i=0; i<SIZE-1; i++)
    {
        for (j=0; j<SIZE-1; j++)
        {
            if (arr[j] > arr [j+1])
            {
                temp = arr [j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
            }
        }
    }

    printf("\n");

    for (i=0; i<SIZE; i++)
    {

        printf("%4i",arr[i]);
    }
    return 0;
}

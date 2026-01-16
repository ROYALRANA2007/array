#include <stdio.h>
void larg_array(int arr[], int n)
{
    int i, small = arr[0];
    for (i = 1; i < n; i++)
    {
        if (small > arr[i])
        {
            small = arr[i];
        }
    }
    printf("the samllest array element is : %d", small);
}
int main()
{
    int arr[] = {8, 4, 45, 75, 4, 6};
    int n = sizeof arr / sizeof arr[0];
    larg_array(arr, n);
    return 0;
}


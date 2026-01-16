#include <stdio.h>
void larg_array(int arr[], int n)
{
    int i, lar = arr[0];
    for (i = 1; i < n; i++)
    {
        if (lar < arr[i])
        {
            lar = arr[i];
        }
    }
    printf("the largest array element is : %d", lar);
}
int main()
{
    int arr[] = {8, 4, 45, 75, 4, 6};
    int n = sizeof arr / sizeof arr[0];
    larg_array(arr, n);
    return 0;
}


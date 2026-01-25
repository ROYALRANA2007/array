#include <stdio.h>
void del_elment(int arr[], int n, int num)
{
    int temp, i;
    for (i = 0; i < n-1; i++)
    {
        if (arr[i] == num)
        {
            temp = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = temp;
        }
    }
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}

int main()
{
    int arr[] = {1, 5, 2, 3, 4, 6, 14, 8, 715, 74, 83};
    int n = sizeof arr / sizeof arr[0];
    int num = 14;
    del_elment(arr, n, num);
    return 0;
}

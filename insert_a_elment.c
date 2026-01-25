#include <stdio.h>
void insert_elments(int arr[], int n, int num, int pos)
{
    int temp, i;

    for (i = n; i > pos; i--)
    {

        arr[i] = arr[i - 1];
    }
    arr[pos] = num;

    for (i = 0; i < n+1; i++)
    {
        printf("%d ", arr[i]);
    }
}

int main()
{
    int arr[] = {1, 5, 2, 3, 4, 6, 14, 8, 715, 74, 83};
    int n = sizeof arr / sizeof arr[0];
    int num = 100;
    int pos = 3;
    insert_elments(arr, n, num, pos);
    return 0;
}

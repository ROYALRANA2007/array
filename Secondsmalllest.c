#include <stdio.h>
void getSecondLargest(int *arr, int n) {
    int i,large=-1,second_largest=-1;
    for(i=0 ;i<n;i++)
    {
        if(arr[i]>large)
        {
            second_largest = large;
            large=arr[i];
            
        }
        else if(arr[i] > second_largest && arr[i] != large)
            second_largest = arr[i];

    }
    printf("the SecondLargest num is : %d",second_largest);
}
int main()
{
    int arr[] = {8, 4, 45, 75, 44, 6};
    int n = sizeof arr / sizeof arr[0];
    getSecondLargest(arr, n);
    return 0;
}


#include<stdio.h>
void subarray_sum(int arr[],int n)
{   int maxsum =arr[0];
    for(int str=0;str<n;str++)
    {
        for (int end=str;end<n;end++)
        {
            int sum =0;
            for(int i=str;i<=end;i++)
            {
                sum+=arr[i];
            }  
            if(sum>maxsum)
            {
               maxsum=sum;
            }
        }
    }
     printf("the max subarray sum is : %d\n",maxsum);
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    int n = sizeof arr / sizeof arr[0];
    subarray_sum(arr, n);
    return 0;
}

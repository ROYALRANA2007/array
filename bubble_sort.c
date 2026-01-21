#include <stdio.h>
void buble_short(int arr[],int n)
{
    int i ,temp;
    for ( i = 0; i < n-1; i++)

    {
        for ( int j = 0; j < n-1; j++)
        {
            if(arr[j]>arr[j+1])
        {
            temp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = temp;

        }
        }
        
        
    }
    for ( i = 0; i < n; i++)
    {
         printf("%d ",arr[i]);
    }
}
int main()
{
    int arr[]={2,1,3,5,8,6,4};
    int n=sizeof arr /sizeof arr[0];
    buble_short(arr,n);

}
